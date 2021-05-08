
#include<stdio.h>
#include<stdlib.h>

#define size 10

struct array
{
    int A[size];
};

int miss1(struct array);
int miss2(struct array);
void miss3(struct array);
void display(struct array);

int main()
{
    
    struct array arr1 = {1,2,3,4,5,6,8,9,10,11};
    struct array arr2 = {6,7,8,9,11,12,13,14,15,16};
    struct array arr3 = {6,7,8,10,11,12,15,16,18,19};

    //printf("Missing element in list = %d \n", miss2(arr1));

    miss3(arr3);

    //display(arr1);

    return 0;

}

int miss1(struct array arr1)
{
    int sum = 0, s = 0, i;

    for(i = 0; i < size; i++)
        sum = sum + arr1.A[i];
    
    s = arr1.A[size - 1] * (arr1.A[size - 1] + 1) / 2;

    return s - sum;

}
int miss2(struct array arr2)
{
    int i, diff;

    diff = arr2.A[0];

    for(i = 0; i < size; i++)
        if(arr2.A[i] - i != diff)
            return i + diff;

}

void miss3(struct array arr3)
{
    int i, diff = arr3.A[0];

    printf("Missing elements are ::\n");

    for(i = 0; i < size; i++)
    {
        if(arr3.A[i] - i != diff)
        {
            while(diff < arr3.A[i] - i)
            {
                printf("%d ", i + diff);
                diff++;

            }
        }
    }
    printf("\n");

    display(arr3);

    printf("\n");

}

void display(struct array arr1)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", arr1.A[i]);

    printf("\n");

}