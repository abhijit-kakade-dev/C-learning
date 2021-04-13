// sum of array elements

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, arr[10], sum = 0;

    printf("\n Enter 10 elements");

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    for(i = 0; i < 10; i++)
        sum = sum + arr[i];
    
    printf("\n The total sum of elements of array = %d", sum);

    return 0;

}
