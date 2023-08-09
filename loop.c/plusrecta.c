#include <stdio.h>
int main ()
{
	int i,n,m;
	char plus='+';
	printf("enter the number for row: ");
	scanf("%d",&n);
	printf("enter the number for column: ");
	scanf("%d",&m);
	for(i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			printf(" %c",plus);
		}
		printf ("\n");
	}
	return 0;
}



