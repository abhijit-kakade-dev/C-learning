#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int main()
{
    int num;

    printf(" Enter the number to calculate factorial\n");
    scanf("%d", &num);

    printf("The factorial of %d is=%d\n", num, factorial(num));
    return 0;

}

int factorial(int num)
{
    return (num==1 ? 1 : (num * factorial(num-1)));
}