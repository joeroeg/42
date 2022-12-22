#!/bin/sh
set -e
help(){
  echo "$1: Uses gcc and objconv to convert a C program to nasm"
  echo "usage: $1 <sourcefile.c>"
  exit 0
}
[ -z "$1" ] || [ "$1" == "-h" ] && help "$(basename "$0")"

C_FILE="$1"
O_FILE="$C_FILE.o"
NASM_FILE="$C_FILE.nasm"
NASM_O_FILE="$NASM_FILE.o"
EXEC_FILE="$C_FILE.run"
gcc -fno-asynchronous-unwind-tables -O2 -c -o "$O_FILE" "$C_FILE"
objconv -fnasm "$O_FILE" "$NASM_FILE"
sed -n '/default rel/!p' "$NASM_FILE"
sed -n '/align=16/!p' "$NASM_FILE"
sed -n '/execute/!p' "$NASM_FILE"
sed -n '/align=1/!p' "$NASM_FILE"
sed -n '/noexecute/!p' "$NASM_FILE"
echo 'Nasm file generated in '"$NASM_FILE"
nasm -f elf64 -o "$NASM_O_FILE" "$NASM_FILE"
gcc -o "$EXEC_FILE"  "$NASM_O_FILE"
echo 'Successfully compiled '"$NASM_FILE" to "$EXEC_FILE"