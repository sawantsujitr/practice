
#include <stdio.h>
int factorial(int num);
 int main()
{
   int num;
   int f;
   printf("enter number");
   scanf("%d",&num); 
   if(num<0)
      printf("negative");
   else
   {
      f = factorial(num);
      printf("%d!=%d",num,f);
   }
} 
int factorial(int n)
{
   if(n==0)
      return(1);
   else
      return(n*factorial(n-1));
}