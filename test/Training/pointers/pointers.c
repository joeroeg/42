#include <stdio.h>
#include <unistd.h>

int main()
{
    char *str = "abcge";
    char c = *str;
    c = *(str + 1);
    c = *(str + 2);
    write(1, str, 3);
    write(1, "\n", 3);
    printf("%s\n", str);
}