#include <stdio.h>
int main()
{
	int i,n,p,s=0,sum=0;
	printf("enter the no.: ");
	scanf("%d",&n);
	printf("enter the no.of p: ");
	scanf("%d",&p);
	for(int i=1; i<=n; i++){
	   s=s*10+p;
	   sum=sum+s;
	}
	printf("%d\n",s);
	printf("%d\n",sum);
	return 0;
}
