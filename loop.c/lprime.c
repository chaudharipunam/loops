#include <stdio.h>
int main()
{
	int i,n,c=0;
	printf("enter the no.: ");
	scanf("%d",&n);
	for (int i=1; i<=n/2; i++){
	   if(n%i==0)
	   {
	     c++;
	   }
	}
    if (c==2)
    {
    printf("it is prime no. "); 
    }
    else
    {
    printf("it is no prime no. ");
    }    
	
    return 0;	    
}
