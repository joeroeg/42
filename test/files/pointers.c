#include <stdio.h>

int main()
{
	int a;
	int *ptr;
    
    printf("%p %d \n", ptr, *ptr);
	a = 5;
	*ptr = a;
    printf("%p %d \n", ptr, *ptr);
    a = *ptr;
    printf("%p %d \n", &a, a);
    *ptr = 1;
    a = 1;
    printf("%p %d \n ", &a , a);
	return (0);
}
//
