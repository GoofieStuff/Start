#include<stdio.h>
void main()
{
    int n = 0 , digit = 0,r = 0, SumOfCubes =0, remainder = 0, originalNum = 0 ,  pow = 1;
    
    printf("Enter a number :");
    scanf("%d", &n);

    originalNum = n;
    
    while (n>=1)
        {
            n/=10;
            digit++;
        }

    n = originalNum;

    if (digit<=2)
        {
            digit = 3;
        }

    while (n>=1)
        {
            remainder = n%10;
            n/=10;

            for (r=1; r<=digit; r++)
                {
                    pow = pow * remainder;
                }
    
            SumOfCubes+=pow;
            pow = 1;
        }
        
    if (originalNum == SumOfCubes)
        {
            printf("%d is armstrong number.", originalNum);
        }
    else 
        {
            printf("%d is not an armstrong number.",originalNum);
        }
        
}