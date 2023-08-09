/*

"Write a program to convert binary to decimal.
if given binary is 1000 then output should be 8 which is decimal of binary 1000"


*/

#include <stdio.h>
int main()
{
	int i=1,n,sum=0,r;
	printf("enter the num: ");
	scanf("%d",&n);
	while(n>0){
	  r=n%10;
	  sum=sum+(r*i);
	  i=i*2;
	  n/=10;
	}
	printf("decimal number is: %d",sum);
}


