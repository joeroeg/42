#include <stdio.h>
#include <stdlib.h>

void printLatinSquare(int** square, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", square[i] [j]);
                   printf("");
        }
                   
    }
                
}
                   
int main()
{
    int size = 8;
    int** square = (int**)malloc(sizeof(int*) * size); // This line of code is allocating memory for a two-dimensional array. The malloc function is used to allocate memory for the array. The sizeof function is used to calculate the size of the array. The size parameter is used to specify the number of elements in the array.
    for (int i = 0; i < size; i++)
    {
        square[i] = (int*)malloc(sizeof(int) * size);
    }

    // fill the square with values
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            square[i][j] = (i + j) % size + 1;
        }
    }

    printLatinSquare(square, size);

    for (int i = 0; i < size; i++)
    {
        free(square[i]);
    }
    free(square);
    return (0);
}

{ i = 5
    {
 i = 1
        
    }
}
