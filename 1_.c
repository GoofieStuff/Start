#include<stdio.h>
int newnum = 0;
int fibonachi(int second, int first)
{

    if (newnum >= 200)
        {

            return newnum;
        }   
    
    else 
        {
            newnum = second + first ; 
            fibonachi(first, newnum);
            printf("%d", newnum);
        }
    
    return newnum ;


}
    

void main()
{ 
    // int lastsecond, lastfirst, limit, newnum = 0;
    // lastsecond = 0 ;
    // lastfirst = 1; 
    // printf("Enter the limit : ");
    // scanf("%d", &limit);

    // printf("%d, %d, ", lastsecond, lastfirst);
    // while (newnum < 100)
    //     {
    //         newnum = lastsecond + lastfirst;
    //         printf("%d, ", newnum);
    //         lastsecond = lastfirst ;
    //         lastfirst = newnum;
            

    //     }

    //using recursive loop

    int n = 0 ;

    printf("Enter a number : ");
    scanf("%d", &n);
    printf("0, 1, ");
    fibonachi( 0 , 1 );
    
}

