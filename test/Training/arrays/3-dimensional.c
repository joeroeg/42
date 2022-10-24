#include <stdio.h>

int main()
{	
	char x [3][2][1] = {{1,2}, {3,4}, {5,6}};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 1; k++)
			{
				printf("[%i][%i][%i] = %d\n", i, j, k, x[i][j][k]);
			}
		}
	}	return (0);
}