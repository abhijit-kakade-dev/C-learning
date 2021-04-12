
// frequency of array elements

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, arr[5];
    
    printf("\n Enter the 5 elements of an array.");
    
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<5; i++)
    {
        int count = 0;
        
        for(j=0; j<5; j++)
        {
            if( arr[i] == arr[j])
                count++;
        }
        
        printf("\n '%d' occurs %d times", arr[i], count);
        
    }
    
    return 0;
    
}