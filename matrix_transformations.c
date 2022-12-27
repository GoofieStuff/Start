#include<stdio.h>
int i=0, j=0, row = 1, col = 1;
float A[10][10];

void main()
{
    int makematrix(), cnstmul(), prntmtrx(), rowmul(), colmul(), reduce(), printsome(), rowtraInt;
    makematrix();
    printsome();
    //cnstmul(2);
    // rowmul();
    // colmul();
    // cnstmul();
    // prntmtrx();
    //for (rowtraInt = 1 ; rowtraInt<=3; rowtraInt++)
    //{
    //    rowtra();
    //}
}
int makematrix()
{   
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &row, &col);
    printf("\nNow Enter the elements: ");
    int prntmtrx();
    float element;
    for (i=1; i<=row; i++)
    {
        for (j=1;j<=col; j++)
        {
            scanf("%f", &element);
            //A[i][j]=(float)j;
            A[i][j] = element;
        }
    }
    prntmtrx();
    printf("\n");
    return 0;
}   
int cnstmul()
{
    int n;
    printf("\nMultiply the whole matrix by: ");
    scanf("%d", &n);
    for (i=1; i<=row; i++)
    {
        for (j=1;j<=col; j++)
        {
            A[i][j]*=n;
        }
    }
    return 0;
}
int prntmtrx()
{
    int q, e; 
    printf("\nMatrix A : \n");
    for (q=1; q<=row;q++)
    {
        for (e=1;e<=col; e++)
        {
            printf("%.2f  ", A[q][e]);
        }
        printf("\n");
    }
    
    return 0; 
}
int rowmul()
{
    int n, r;
    printf("\nWhich row to modify: ");
    scanf("%d", &r);
    printf("Multiply row No.%d by: ", r);
    scanf("%d", &n);
    
    for (i=1; i<=row; i++)
    {
        if (i==r)
        {
            for (j=1;j<=col; j++)
            {
                A[i][j]*=n;
            }
        }
    }
    return 0; 
}
int colmul()
{
    int n, c;
    printf("\nWhich column to modify: ");
    scanf("%d", &c);
    printf("Multiply column No.%d by: ", c);
    scanf("%d", &n);
    
    for (i=1; i<=row; i++)
    {
        {   
            for (j=1;j<=col; j++)
            {
                if((j==c))
                {
                    A[i][j]*=n;
                }
            }
            
        }
    }
    return 0;
}
int reduce()
{
    int changer=0, changeri =0, changerj =0;
    //int redrow = 0;
    float redconst = 0;
    printf("Enter the row and column of the element: ");
    scanf("%d %d", &changeri, &changerj);
    printf("The element, that is to be reduced to 0 is %f", A[changeri][changerj]);
    A[changeri][changerj] = (redconst * A[changeri][changerj]) - (A[changeri][changerj] * redconst);
    prntmtrx();
}
int printsome()
{
    int rowtra(),rankfind(),prntmtrx(), count = 1; 
    
    for (j = 1; j<=(col-1); j++)
    {
        
        for (i = row ; i>j; i--)
        {  
            rowtra(i,j);
            //printf(" %f", A[i][j]);
            //printf("%dth iteration is done.", count);
            //count++;
        }
    }
    rankfind();
}
int rowtra(int chngi, int chngj)
{
    float rc1=0, rc2=0;
    int k=0,redrow=0 , prntmtrx();
    //int chngi, chngj;
    //printf("Enter the row and column of the element : ");
    //scanf("%d %d", &chngi , &chngj);
    redrow = chngj ; 
    rc1 = A[redrow][redrow];
    rc2 = A[chngi][chngj];
    for (k=1; k<=col; k++)
    {
        if (rc1 == 0 )
        {
            printf("Matrix can not be reduced any further for the sake of finding the rank, please conclude the rank from the existing matrix.");
            break;
        }
        else
        {
            A[chngi][k] = (rc1*(A[chngi][k]))- (rc2*(A[redrow][k]));
        }
    }
}
int rankfind()
{
    int check = 0, checkTtl = 0;
    for (i=1;  i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if (A[i][j] != 0)
            {
                check =1 ; 
            }
        }
        if(check ==1 )
        {
            checkTtl+=1;
        }
        check = 0;
    }
    printf("\n\nThe rank of the given matrix is : %d\n", checkTtl);
    prntmtrx();
}