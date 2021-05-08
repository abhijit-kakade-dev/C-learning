
#include<stdio.h>
#include<stdlib.h>

#define size 20

struct array
{
    int A[size];
    int length;
};

struct array *uni(struct array, struct array);

struct array *intersection(struct array, struct array);

struct array *difference(struct array, struct array);

int main()
{
    int i;

    //struct array arr1, arr2;

    struct array arr1 = {{2,4,6,8,10,14,18,20}, 8};

    struct array arr2 = {{4,5,8,10,12,14}, 6};

    struct array *arr3;

    arr3 = difference(arr1,arr2);

    for(i = 0; i < arr3->length; i++)
        printf("arr3[%d] = %d \n", i, arr3->A[i]);

    return 0;

}

struct array *uni(struct array arr1, struct array arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct array *arr3;

    arr3 = (struct array *)malloc(sizeof(struct array));

    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
            arr3->A[k++] = arr1.A[i++];

        else if(arr1.A[i] > arr2.A[j])
            arr3->A[k++] = arr2.A[j++];

        else
        {
            arr3->A[k++] = arr1.A[i++];
            j++;
        }

    }

    for(; i < arr1.length; i++)
        arr3->A[k++] = arr1.A[i];

    for(; j < arr2.length; j++)
        arr3->A[k++] = arr2.A[j];

    arr3->length = k;

    return arr3;

}

struct array *intersection(struct array arr1, struct array arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct array *arr3;

    arr3 = (struct array *)malloc(sizeof(struct array));

    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
        {
            i++;
        }

        else if(arr1.A[i] > arr2.A[j])
        {
            j++;
        }

        else
        {
            arr3->A[k++] = arr1.A[i++];
            j++;
        }

    }

    arr3->length = k;

    return arr3;

}

struct array *difference(struct array arr1, struct array arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct array *arr3;

    arr3 = (struct array *)malloc(sizeof(struct array));

    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
            arr3->A[k++] = arr1.A[i++];

        else if(arr1.A[i] > arr2.A[j])
            j++;

        else
        {
            i++;
            j++;
        }

    }

    for(; i < arr1.length; i++)
        arr3->A[k++] = arr1.A[i];

    arr3->length = k;

    return arr3;

}