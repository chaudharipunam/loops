#include <stdio.h>
int main()
{
   int sum=0,n,d;
   printf("enter the  num: ");
   scanf("%d",&n);
   int p=n;
   while(n>0){
     d=n%10;
     sum=sum+d;
     n=n/10;
   }
   if(p%sum==0){
   printf("it is harshad num\n ");
   }
   else{
   printf("it is not harshad num\n ");
   }
   return 0;
}


