#include <stdio.h>
int main()
{
	int n,d,sum;
	printf("enter the no.: ");
	scanf("%d",&n);
	while(n>0){
	d=n%10;
	sum=sum*10+d;
	n=n/10;
	}
	printf("%d",sum);
	return 0;
	
}

