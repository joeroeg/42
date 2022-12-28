#include <stdio.h>

int main(void)
{
	int x = 5;
	int *ptrx = &x; // Implicit conversion of int to pointer
	int y = 10;
	ptrx += y; // Explicit plus operation on two pointers
	*ptrx -= (int)3; //Explicit minus operation on two poitners

	printf("Result is %d\n", *ptrx);
	return (0);
}
/*
This piece of code has examples for both implicit and explicit conversions between integers and pointers. The first line assigns the integer value '5' to variable 'x', while the second line implicitly converts it into a pointer (by taking its address). The third and fourth lines perform explicit operations when adding or subtracting, requiring type casting syntax in order for them to work correctly.

The addition and subtraction operations are being applied to two pointers, even if one of them is not explicitly written. The pointer ‘ptrx’ on the second and third line implicitly stores the address of integer variable ‘x’, thus allowing both addition and subtraction operations to be applied between these two values as if they were pointers.

You can use printf to display the result of your code by printing out pointer 'ptrx', as follows: printf("Result is %d\n", *ptrx); This will output the current value stored at location of 'ptrx', which would be 5 + 10 - 3 = 12.

error: invalid operands to binary expression ('int' and 'int *')         *ptrx -= 3; //Explicit minus operation on two poitners
This error occurs when you are trying to perform a binary operator (such as subtraction) on two different types of operands. In this case, one operand is an integer ('int') and the other is a pointer to an integer ('int *'). You will need to explicitly cast the pointer so that it can be operated on with integers; in order for this code snippet it would look like:
*ptrx -= (int)3; // Explicit minus operation using explicit casting
*/
