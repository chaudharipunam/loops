#include <stdio.h>
int main()
{
	int i,n,sum;
	printf("enter the number : ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	  int p;
	  printf("enter the num :");
	  scanf("%d",&p);
	  sum=sum+p;
	     printf("%d",sum);
	}
	return 0;
}
