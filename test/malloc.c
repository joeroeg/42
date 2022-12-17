/*
The main concepts that you need to know about malloc() are the syntax for allocating memory, how to access values within the allocated block, and how to free the allocated memory when it is no longer needed.
Additionally, you should be aware of the potential issues associated with memory allocation, such as memory leak, invalid pointer dereferencing, and memory fragmentation.
The main concepts related to malloc() are:
1. syntax for allocating memory
2. how to access values within the allocated block
3. how to free allocated memory when no longer needed
4. potential issues related to memory allocation (memory leak, invalid pointer dereferencing, and memory fragmentation).

The most frequent and practical application of malloc functions is allocating dynamic memory when dealing with unknown-sized data. 
This is especially useful when working with large datasets or complex structures, as it allows the programmer to easily manage and allocate memory without having to pre-allocate a fixed amount of memory.
Furthermore, malloc functions can also be used for allocating memory for local variables, which can save memory resources in certain situations.

//Using malloc()
void *ptr = malloc(16); 

//Using calloc()
void *ptr = calloc(16, 1); 

//Using realloc()
void *another_ptr = realloc(ptr, 32);

*/
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    // Allocate memory using malloc() 
    int n; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    
    // Dynamically create an array of n elements 
    int *arr = (int*)malloc(n * sizeof(int)); 
  
    // Store values in the array 
    for (int i = 0; i < n; i++) 
    { 
        arr[i] = i + 1; 
    }
    // Print the values stored in the array 
    printf("The values stored in the array are: \n"); 
    for (int i = 0; i < n; i++) 
    { 
        printf("%d ", arr[i]); 
    } 
  
    // Free the allocated memory to prevent memory leaks 
    free(arr); 
  
    return 0; 
}