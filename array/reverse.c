
#include<stdio.h>
#include<stdlib.h>

#define size 20

struct array
{
    int A[size];
    int length;
};

void reverse(struct array *arr1);
void display(struct array arr2);
void reverse2(struct array *arr1);
void reverse3(struct array *);

int main()
{
    struct array arr = {{1,2,3,4,5,6,7,8,9,10}, 10};

    reverse2(&arr);

    display(arr);

    return 0;

}
void reverse(struct array *arr1)
{
    int i, j, B[size];

    for(i = arr1->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr1->A[i];

    for(i = 0; i < arr1->length; i++)
        arr1->A[i] = B[i];

    //display(arr1);

}
void display(struct array arr2)
{
    int i;

    for(i = 0; i < arr2.length; i++)
        printf("A[%d] = %d\n", i, arr2.A[i]);

}
void reverse2(struct array *arr1)
{
    int i, j, *ptr;

    ptr = (int *)malloc(arr1->length * sizeof(int));

    for(i = arr1->length - 1, j = 0; i >= 0; i--, j++);
        ptr[j] = arr1->A[i];

    for(i = 0; i < arr1->length; i++)
        arr1->A[i] = ptr[i];

    for(i = 0; i < arr1->length; i++)
        printf("ptr[%d] = %d\n", i, ptr[i]);

}
void reverse3(struct array *arr1)
{
    int temp, i, j;

    for(i = 0, j = arr1->length - 1; i < j; i++, j--)
    {
        temp = arr1->A[i];
        arr1->A[i] = arr1->A[j];
        arr1->A[j] = temp;

    }

}