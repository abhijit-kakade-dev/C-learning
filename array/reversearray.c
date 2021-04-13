
// reverse array and print it.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, arr[10];

    printf("\n Enter 10 elements in array.");

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    for(i = 0; i < 10; i++)
        printf("\n arr[ %d ] = %d", i, arr[i]);

    for(i = 9; i >= 0; i--)
        printf("\n reversearray[ %d ] = %d", i, arr[i]);

    return 0;

}
