#include<stdio.h>
//this code gives the list of prime numbers from range 1 to 100; exception = 1 is not prime or composite 
//1 is considered as prime in here 

void main()
{
    int i,j, prime = 1;
    
    
  for(j=1;j<=100;j++)
    {
      for(i=2;i<j;i++)
          {
            if (j%i == 0)
              {
                 prime = 0;
              }
            
             
            
          }
          if(prime == 1)
            {
              printf("%d is prime no.\n",j);
            }
          else  
            {
              printf("%d is not prime no.\n",j);
            }
            prime = 1;
    }           
        
}