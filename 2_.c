#include<stdio.h>
void main()
{
    char c; 
    printf("Enter a character to check if its a number or not : ");

    scanf("%c", &c);

    if ( isdigit(c))
     {
        printf("Given %c is a digit.", c);
    
     }
    else 
     {
        printf("Given %c is not a digit.", c);
     }
}