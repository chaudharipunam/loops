#include <stdio.h>
int main()
{
	int i,n,pro=1;
	printf("enter the number : ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	  int p;
	  printf("enter the num :");
	  scanf("%d",&p);
	  pro=pro*p;
	}
	    printf("%d",pro);
	return 0;
}
