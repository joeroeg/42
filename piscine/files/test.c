#include <stdio.h>
char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    i = 0;
    if (*to_find == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
        }
        i++;
    }
    return (0);
}
int main()
{
    char str[] = "this is a test string";
    char to_find[] = "test";

    printf("%s", ft_strstr(str, to_find));
}
