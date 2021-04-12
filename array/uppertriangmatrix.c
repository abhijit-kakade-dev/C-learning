// convert the matrix into upper triangular matrix

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, matrix[3][3];

    printf("\n Enter the elements for 3*3 matrix.");

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &matrix[i][j]);

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t matrix[%d][%d] = %d", i, j, matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n Let's convert the matrix into UPPER TRIANGULAR MATRIX.\n");

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            {
                if( i > j)
                    matrix[i][j] = 0;
            }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t matrix[%d][%d] = %d", i, j, matrix[i][j]);
        }
        printf("\n");
    }

    return 0;

}