#include <stdio.h>
int main()
{
	int i,n;
	char asterisk ='*';
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for (int j=1; j<=n; j++){
		printf(" %c",asterisk);
		}
		printf("\n");
	}
	return 0;
}



