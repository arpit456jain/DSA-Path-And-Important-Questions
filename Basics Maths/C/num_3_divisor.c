#include<stdio.h>
void n3div(int n)  //function to check 
{
 int d=0;
 int i;
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
   d++;
 }
 if(d==3)                //if it has 3 divisors
  printf("\n%d",n);
}
 
 
 int main()
 {
 int num,i;
 printf("enter the number:");
 scanf("%d",&num);
 printf("\nNumbers are:");
 for(i=0;i<=num;i++)
 {
  n3div(i);             //checking each num by calling function
 }
 return 0;
}
