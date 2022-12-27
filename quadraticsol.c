#include<stdio.h>
#include<math.h>
void main()
{
    float a, b, c;
    printf("Enter the values for a, b, c: ");
    scanf("%f %f %f", &a, &b , &c);
    //printf("%lf\n", (b*b - 4*a*c));
    if ((b*b - 4*a*c)==0)
        {
            printf("The root of equation is %f", (-b/(2*a)));
        }
    else if ((b*b - 4*a*c) > 0)
        {
            printf("The two possible roots are =\n root 1 = %.2lf\n root 2 = %.2lf", (-b + sqrt((b*b - 4*a*c)))/(2*a), (-b - sqrt((b*b - 4*a*c)))/(2*a));
        }
    else if ((b*b - 4*a*c) < 0)
        {
            printf("The two possible roots are =\nRoot 1 = %.2lf + (%.2lf)i\n", (-b/(2*a)), ((sqrt(-(b*b - 4*a*c)))/(2*a)));
            printf("Root 2 = %.2lf - (%.2lf)i", (-b/(2*a)), ((sqrt(-(b*b - 4*a*c)))/(2*a)));
        }
}