
// check whether two matrix are equal or not

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int mat1[3][3], mat2[3][3], i, j;
    int flag = 0;

    printf("\n Enter the value for 1st matrix.");

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }

    printf("\n Enter the values for 2nd matrix");

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &mat2[i][j]);

    printf("\n Let's check the equality of two matrix");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if( mat1[i][j] == mat2[i][j])
                flag++;

        }
    }

    if( flag == 9)
        printf("\n Two matrices are EQUAL.");
    else
        printf("\n Two matrices are NOT EQUAL.");

    return 0;

}