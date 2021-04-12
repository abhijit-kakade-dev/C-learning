// sort array in ascending array

#include<stdio.h>
#include<stdlib.h>
# define size 10

int main()
{
    int i, j, arr[size];

    printf("Enter %d elements in an array", size);

    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    for(i=0; i< size - 1; i++)
    {   
         int flag = 0;

        for(j=0; j< size - 1 - i; j++)
        {
            int temp;
           
            if( arr[j+1] < arr[j])
            {   
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        if( flag == 0)
        {
            printf("\n Array is already sorted.");
        }
    }

    printf("\n Ascending order array:");

    for(i=0; i<size; i++)
        printf("\n arr[%d] = %d", i, arr[i]);

    return 0;

}