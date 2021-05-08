
#include<stdio.h>
#include<stdlib.h>
#define size 10
struct array 
{
    int A[size];
    int length;
};

void reverse1(struct array *arr);
void reverse2(struct array *arr);
void display(struct array *arr);

int main()
{
    struct array arr = {{1,2,3,4,5,6,7,8,9,10}, 10};

    reverse1(&arr);

    display(&arr);

    printf("\n");
    
    reverse2(&arr);

    display(&arr);

    return 0;

}
void reverse1(struct array *arr)
{
    int B[size], i, j;

    for(i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];

    for(i = 0, j = 0; i <= arr->length - 1; i++, j++)
        arr->A[i] = B[j];

}

void reverse2(struct array *arr)
{
    int i,j;
    
    for(i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        int temp;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;

    }

    //display(arr);

}
void display(struct array *arr)
{
    int i;
    for(i = 0; i <= arr->length - 1; i++)
        printf("A[%d] = %d \n", i, arr->A[i]);

}