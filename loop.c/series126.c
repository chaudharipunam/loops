/*

enter the num: 6
 1  2  6  24  120  720 
 873


*/

#include <stdio.h>
int main()
{
	int i,n,mul=1,sum=0;
	printf("enter the num: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	  mul=mul*i;
	  sum=sum+mul;
	  printf(" %d ",mul);
	}
	printf("\n");
	printf(" %d\n ",sum);
	return 0;
}
