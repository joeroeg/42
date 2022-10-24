#include <stdio.h>

int closest_prime(int n)
{
    if (n <= 2)
        return 2;

    int i, j;
    while (i > 2) 
    {
        while (j < i)
        {
            if (i % j == 0)
            break;
        }
        if (j == i)
        return i;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", closest_prime(n));
    return (0);
}