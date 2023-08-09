#include <stdio.h>
int main()
{
	int i,n;
	char star='*';
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%c",star);
		}
	   printf("\n");
	}
	return 0;
}
