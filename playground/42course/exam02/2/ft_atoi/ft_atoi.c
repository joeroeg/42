#include <unistd.h>
#include <stdio.h>
#include <limits.h>


int	ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}

int main()
{
    printf("%d", ft_atoi("OH ! 13268!"));
}
