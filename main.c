#define ROW 3
#define COL 4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, matrix1[ROW][COL], matrix2[ROW][COL], matrix3[ROW][COL];
    printf("Enter matrix 1 rows and columns %d %d:\n, ROW, COL");
    for(i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            scanf("%d", matrix1 [i][j]);
    printf("Enter matrix 2 rows and columns %d %d:\n, ROW, COL");
    for(i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            scanf("%d", matrix2 [i][j]);
    for(i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
    printf("The resultant matrix is : \n");
    for(i=0; i<ROW; i++)
    {
       for(j=0; j<COL; j++)
            printf("%4d",matrix3[i][j]);
       printf("\n");
    }



    return 0;
}
