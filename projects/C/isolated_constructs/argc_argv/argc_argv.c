/*
a.exe or a.out file should be placed in 42 folder or correct path ion json file "program": "${workspaceFolder}/a.exe",
*/

#include<stdio.h>

int main (int argc, char *argv[]) 
{ 
    int i;  
    printf("Total arguments passed: %d\n", argc);  
    for (i = 0; i < argc; i++)  
        printf("Argument %d: %s\n", i, argv[i]); 
    return (0);
}