
// to find the number of digits in factorial of given number

#include<stdio.h>
long int fact(int n)                      // function to calculate factorial of given number   
{ 
    long int fac=1;;
    for(int i=1;i<=n;i++)
     { 
       fac=fac*i;
     }
   return fac;
}


int digit(long int f)                        //function to calculate number of digits in factorial
{
   int d=0;
   while(f>0)
   {
     d++;
     f=f/10;
   }
 return d;
} 
int main()
 {
    int num,digits;
    long int factorial;
   printf("\tEnter the number :");  
   scanf("%d",&num);
   factorial=fact(num);                        //calling fact function
   digits=digit(factorial);                    //calling digit function
   printf("\n\tThe digits in factorial of %d is: %d\n",num,digits);
 return 0;
 }

 
