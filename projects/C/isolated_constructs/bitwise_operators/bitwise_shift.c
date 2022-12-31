#include <stdio.h> 

/*
*/

int main() 
{ 
    int number1 = 7; // 00000111 
    int number2 = 14; // 0001110
	
	printf("original number1 and number2 = %d, %d\n", number1, number2); 
	//
	printf("number1 & number2 = %d\n", number1&number2); 
	// Outputs 0000010 which is equal to 2 
    printf("OR operator number1 | number2 = %d\n" , number1|number2); 
    // Outputs 0001111 which is equal to 15 
    printf("number1 ^ number2 = %d\n", number1^number2); 
    // Outputs 0001101 which is equal to 13 
	printf("~number1 = %d\n" , ~number1); 
    // Outputs 11111000 which is equal to -8 
    printf("number1 << 1 = %d\n" , number1<<1); 
	// Outputs 0000110 which is equal to 6 
    printf("number1 >> 1 = %d\n", number1>>1); 
    // Outputs 00000011 which is equal to 3 

    return 0; 
}