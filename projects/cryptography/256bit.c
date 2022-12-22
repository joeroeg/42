#include	<stdio.h> 
#include	<stdlib.h> 
#include	<string.h>
#include	<math.h>
#include	<time.h>

// Function to generate a random 256 bit number 
int rand256() { 
    // Use rand() to generate a random number 
    int randNum = rand(); 
  
    // Use modulus (%) operator to limit the random number to 256 bits 
    int rand256 = randNum % ((int)pow(2, 256)); 
  
    return rand256; 
} 

int main()
{
	time_t t;
	srand((unsigned) time(&t));
   int randNum = rand256();
   printf("Random 256 bit number is %d", randNum);
   fprintf(stdout, "\nRandom 256 bit number in binary: %b", randNum);
   return 0; 
}