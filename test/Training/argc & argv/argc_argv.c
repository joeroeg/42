#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    int i;
	int t;
    for (i = 0; i < argc; i++)
    {
//        printf("argc:[%d] argv:[%d][%d] %c\n",argc, i, t, argv[i][t]); // argv - an array of array of character (доступ ко всему предложению) 2. argv[] - is an array of character (доступ ко всему слову) 3. argv[][] - is a character (доступ ко каждому )
    printf("argc:[%d] argv:[%d] %s\n",argc, i, argv[i]);
	}

    return (0);
}



// multiplication
//    int result = 1;
//    for (i = 1; i < argc; i++)
//    {
//        int x = strtol(argv[i], NULL, 10);
//        result = result * x;
//        result = result * argv[i];
//    }
//    printf("multiplication result is %d\n ", result);