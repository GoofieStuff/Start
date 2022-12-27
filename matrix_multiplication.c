#include<stdio.h>
void main()
{
    int makencheckmatrix();
    makencheckmatrix();

}
int makencheckmatrix()
{
    int i,j ,k, num =0, r1,c1,r2,c2, sum=0;
    printf("Enter the number of rows and columns of first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and colums of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int A[r1][c1], B[r2][c2], J[r1][c2];
    if (c1 == r2)
    {
        printf("The first matrix is : \n");
        for (i=1; i<=r1; i++)
        {
            for (j = 1; j<=c1; j++)
            {
                A[i][j] = j ; 
                printf("%d  ",A[i][j]); 
            }
            printf("\n");
        }
        printf("\n\n");
        printf("The second matrix is : \n");
        for (i=1; i<=r2; i++)
        {
            for (j = 1; j<=c2; j++)
            {
                B[i][j] = j ;  
                printf("%d  ",B[i][j]); 
            }
            printf("\n");
        }
        for(i=1;i<=r1;i++)
        {
            for(k=1;k<=c2;k++)
            {
                sum=0;
                for(j=1;j<=r2;j++)
                { 
                    sum = sum + A[i][j]*B[j][k];
                }
                J[i][k]= sum;
            }
        }
        printf("\n\n");
        printf("The multiplication of two given matrices is : \n");
        for (i=1; i<=r1; i++)
        {
            for (j = 1; j<=c2; j++)
            {
                printf("%d  ",J[i][j]);
            }
            printf("\n");
        }
    }
    else 
    {
        printf("The following matrices can not be multiplied since their row-column format is not valid.\n(Columns of first matrix must be equal to the rows of second matrix)\n\n");
    }
}