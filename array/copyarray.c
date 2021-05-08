
// copy one array into another array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, arr[10], copyarr[10];

    printf("\n Enter 10 elements for an array.");

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 10; i++)
        copyarr[i] = arr[i];
    
    for(i = 0; i < 10; i++)
        printf("\n copyarr[%d] = %d", i, copyarr[i]);

    return 0;

}
