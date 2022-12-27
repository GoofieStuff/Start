#include<stdio.h>
void main()
{
    int dig = 0 ,  sape= 0, newnumdig=0;
    float num2 = 0, num =0, multi = 1, newnum =0 ;
    scanf("%f", &num);
    
    //code for digit identifier;
    num2=num;
    while (num2>=1)
     {
        num2= num2/10;
        dig+=1;
     }
    printf("digits are %d\n", dig);

    while (dig>0)
        {   
            
            sape = (int)num % 10;
            
            for (newnumdig=(dig-1);newnumdig>0; newnumdig--)
                {   
                    multi*=10;
                }
            
            newnum+=(sape*multi);
            multi = 1;
            num/=10;
            dig--;

        }
    printf("%.0f", newnum);
}