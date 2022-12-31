#include <stdio.h>

/*
OBJDUMP
objdump -d <binary or executable file> // To receive assembly code from a binary or executable file, you can use the objdump command from the terminal. This command will allow you to disassemble a binary or executable file and output the assembly code. For example, the command "objdump -d <binary or executable file>" can be used to disassemble the specified file and print out its assembly code.

GCC
gcc -c isalpha_x86-64_gcc_12.2.s // to compile .s(assembly) to .o(object file)


LLVM IR
clang -S -emit-llvm isalpha.c  // produce non-optimized LLVM IR file
clang -O3 -S -emit-llvm islpha.c // produce optimized LLVM IR file

clang -cc1 isalpha.c -emit-llvm // Produces foo.ll with the IR. -cc1 adds some cool options like -ast-print. Check out -cc1 --help for more details.
llc isalpha.ll // To compile LLVM IR further to assembly, use the llc tool:
*/
int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c <= 122))
		return (1);
	return (0);
}

int	main(void)
{
	char c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}
