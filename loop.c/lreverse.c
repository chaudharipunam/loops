#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the num: ");
	scanf("%d",&n);
	for (i=1; n>=i; n--){
	   printf("%d\n",n);
	}
	return 0;
}   
