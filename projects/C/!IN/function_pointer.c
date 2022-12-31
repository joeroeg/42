#include <stdio.h> 

// Pointer to a function 

int (*func_ptr)(int);
int func(int n) 
{ 
    return n+1; 
} 
  
int main() 
{ 
    int n = 10; 
  
    // Assigning the address of func() to func_ptr 
    func_ptr = &func; 
  
    // Invoking the function using function pointer. 
    printf("%d", func_ptr(n)); 
  
    return 0; 
}