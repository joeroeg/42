#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, const char *s2)
{
    char *start_s1 = s1;

        while (*s2)
        {
            *s1 = *s2;
            s1++;
            s2++;
        }
        // if string is not null terminated then start_s1 will point to -> Hello, world!Hello, world!
        *s1 = '\0';
    return (start_s1);
}

int main()
{
    int i = 0;
    char source[] = "Hello, world!";  // Source string
    char destination[13];  // Destination buffer of insufficient size

    ft_strcpy(destination, source);

    // Printing the destination string
    printf("Destination: %s\n", destination);

    return 0;
}
