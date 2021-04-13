
// largest element in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, large, arr[10];
    
    printf("\n Enter 10 numbers in an array.");
    
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
        
    large = arr[0];
    
    for(i = 0; i < 10; i++)
    {
        if(arr[i] > large)
            large = arr[i];
            
    }
    
    printf("\n Largest element in an array is = %d", large);
    
    return 0;
    
}
