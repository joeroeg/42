#include <stdio.h> 
#include <string.h> 
int main(void) {  

    // Declare an array of size 2 and initialize its elements to 0    
    int a[2] = {1, 2};     

    printf("Array before copy: \n");       

    for (int i=0;i<2;i++){         
        printf("%d ",a[i]);        
    }           

    // Copy from index 1 to index 0 using memcpy    
     memcpy(&a[0], &a[1], sizeof(int));                        

     printf("\nAfter copying withmemset(): \n ");            

    for (int i=0;i<2;i++){         
        printf("%d ",a[i]);        
    }           

    // Copy from index 1 to index 0 using memmove    
     memmove(&a[0], &a[1], sizeof(int));                          

      printf("\nAfter copying withmemcpy(): \n");             

      for (int i=0;i<2;i++){              
          printf("%d ", a [ i ] ) ;      
      }        

      return 0 ; 
}


/*
int main(void) {  

    // Declare an array of size 5 and initialize its elements to 0    
    int a[6] = {1, 2, 3 ,4, 5};     

    printf("Array before copy: \n");       

    for (int i=0;i<5;i++){         
        printf("%d ",a[i]);        
    }           

    // Copy from index 0 to index 2 using memcpy    
     memcpy(&a[0], &a[2], sizeof(int)*1);                        

     printf("\nAfter copying memcpy(): \n");            

    for (int i=0;i<5;i++){         
        printf("%d ",a[i]);        
    }           

    // Copy from index 0 to index 2 using memmove    
     memmove(&a[2], &a[1], sizeof(int)*1);                          

      printf("\nAfter copying memove(): \n");             

      for (int i=0;i<5;i++){              
          printf("%d ", a [ i ] ) ;      
      }        

      return 0 ; 
}
*/