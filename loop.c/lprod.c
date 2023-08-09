#include <stdio.h>
int main()
{
	int i,p=1,n;
	printf("enter the no.: ");
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
	p=p*i;
	}
	printf("product is: %d\n",p);
	return 0;
}

