/*

multiplication of digit 

*/

#include <stdio.h>
int main()
{
	int n,r,pro=1;
	printf("enter the num: ");
	scanf("%d",&n);
	while (n>0){
	  r=n%10;
	  pro=pro*r;
	  n=n/10;
	}
	printf("%d\n",pro);
	return 0;
}



