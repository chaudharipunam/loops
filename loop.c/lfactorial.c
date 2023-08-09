#include <stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the number : ");
	scanf("%d",&n);
	for(i=1; n>=i; n--){
	  fact=fact*n;
	}
	printf("%d",fact);
	return 0;
}
