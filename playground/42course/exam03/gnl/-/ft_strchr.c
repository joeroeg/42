#include <stdio.h>

/*
char *ft_strchr(const char *s, int c) {
    while (*s != (char)c) {
        if (!*s++) return (NULL);
    }
    return (char *)s;
}
*/

char *ft_strchr(char *s, char c)
{
    while (*s != c)
    {
        if (*s == '\0')
            return NULL;
        s++; // Corrected increment here
    }
    return s;
}


int main() {
    char *str = "Hello, World!";
    int testChars[] = {'H', 'W', '!', 'x', '\0'}; // Characters to test: existing, not existing, and the null terminator
    char *result;

    for (int i = 0; i < 5; i++) {
        result = ft_strchr(str, testChars[i]);
        if (result != NULL) {
            printf("Character '%c' found: %s\n", (char)testChars[i], result);
        } else {
            printf("Character '%c' not found.\n", (char)testChars[i]);
        }
    }

    return 0;
}
