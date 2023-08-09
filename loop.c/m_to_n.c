/*

"Given two integer numbers M and N, write a program to print the integers from M to N.
if M=5 and N=12 then output should be 5,6,7,8,9,10,11,12"

*/

#include <stdio.h>
int main()
{
	int m,n;
	printf("enter the final value: ");
	scanf("%d",&n);
	for(m=5; m<=n; m++){
	printf("value between m & n:  %d\n",m);
	}
	return 0;
}
