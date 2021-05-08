

#include<stdio.h>
#include<stdlib.h>
#define size 10

struct array
{
    int A[size];

};

void leftshift(struct array*);
void display(struct array*);

int main()
{
    struct array arr = {1,2,3,4,5,6,7,8,9,10};

    display(&arr);
    
    printf("\n");

    leftshift(&arr);

    return 0;

}
void leftshift(struct array *arr1)
{
    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size - 1; j++)
        {
            arr1->A[j] = arr1->A[j + 1]; 
        }
           
        arr1->A[j] = i + 1;

        display(arr1);

        printf("\n");

    }
        
}
void display(struct array *arr2)
{
    int i;

    for(i = 0; i < size; i++)
        printf("%d ", arr2->A[i]);

}