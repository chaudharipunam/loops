#include <stdio.h>
int main()
{
	int i,n,s;
	printf("enter the no.: ");
	scanf("%d",&n);
	for (int i=1; i<=n/2; i++)
	{
	   if(n%i==0)
	   {
	   	s+=i;
	   }
	}
	
     if (s==n)
     {
	   printf("it is perfect no.");
     }
     else
     {
        printf(" it is not perfect no.");
     }
	   
        
        
        
	   return 0;
}
