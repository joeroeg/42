#include <stdio.h> 
#include <string.h> 

int main(void) {  
    int a[50] = {1, 2, 3 ,4, 5};     

    printf("origin: ");       

    for (int i=0;i<5;i++)
	{         
        printf("%d ",a[i]);        
    }
	memcpy(&a[2], &a[0], sizeof(int)*1);
	printf("\ndst[0]: ");
	for (int i=0; i<5; i++)
	{
        printf("%d ",a[i]);        
    }
	
	memcpy(&a[2], &a[1], sizeof(int)*1);
	printf("\ndst[1]: ");
	for (int i=0; i<5; i++)
	{
        printf("%d ",a[i]);        
    } 
		
	memcpy(&a[2], &a[2], sizeof(int)*2);
	printf("\ndst[2]: ");
	for (int i=0; i<5; i++)
	{
        printf("%d ",a[i]);        
    } 
		
	memcpy(&a[2], &a[3], sizeof(int)*3);
	printf("\ndst[3]: ");
	for (int i=0; i<5; i++)
	{
        printf("%d ",a[i]);        
    }
	
	memcpy(&a[2], &a[4], sizeof(int)*4);
	printf("\ndst[4]: ");
	for (int i=0; i<5; i++)
	{
        printf("%d ",a[i]);        
    }
		
	memcpy(&a[2], &a[5], sizeof(int)*5);
	printf("\ndst[5]: ");
	for (int i=0; i<5; i++)
	{
        printf("%d ",a[i]);        
    }

	memcpy(&a[2], &a[6], sizeof(int)*6);
	printf("\ndst[6]: ");
	for (int i=0; i<5; i++)
	{
        printf("%d ",a[i]);        
    }
	return (0) ; 
}