

#include<stdio.h>
#include<stdlib.h>

#define size 20

struct array
{
    int A[size];
    int B[size];
    int m;
    int n;
};

int C[size];

void merge(struct array );

int main()
{
    int i;

    struct array arr1;

    printf("Enter the size of array A[]\n");
    scanf("%d", &arr1.m);

    printf("Enter the size of array B[]\n");
    scanf("%d", &arr1.n);

    printf("Enter elements in A[]\n");

    for(i = 0; i < arr1.m; i++)
        scanf("%d", &arr1.A[i]);
    
    printf("Enter the elements in array B[]\n");

    for(i = 0; i < arr1.n; i++)
        scanf("%d", &arr1.B[i]);

    merge(arr1);

    /*for(i = 0; i < (arr1.m + arr1.n); i++)
        printf("C[%d] = %d \n", i, C[i]);*/

    return 0;

}

void merge(struct array arr1)
{
    int i, j, k;

    i = j = k = 0;

    while(i < arr1.m && j < arr1.n)
    {
        if(arr1.A[i] < arr1.B[j])
            C[k++] = arr1.A[i++];

        else if(arr1.A[i] > arr1.B[j])
            C[k++] = arr1.B[j++];

        else
        {
            C[k++] = arr1.A[i++];
            j++;
        }
    }

    for(; i < arr1.m; i++)
        C[k++] = arr1.A[i];
    
    for(; j < arr1.n; j++)
        C[k++] = arr1.B[j];

    printf("The final merged array ::\n");

    for(i = 0; i < (arr1.m + arr1.n); i++)
        printf("C[%d] = %d \n", i, C[i]);

}