#include<stdio.h>
void primecheck(int n)  //function to check 
{
 int d=0;
 int i;
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
   d++;
 }
 if(d==2)                //if it is divisible by one and itself
  printf("\nits a prime number");
 else
 printf("\nits not a prime number");
}

int main()
{
int num;
printf("\nenter the number :");
scanf("%d",&num);
primecheck(num);    //calling function
return 0;
}
 
