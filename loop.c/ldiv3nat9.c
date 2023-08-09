/*

Write a program to find the sum of the squares of the first 9 natural numbers that are divisible by 3.

*/

#include <stdio.h>
int main()
{
	int i,n,s,p=3,r;
	printf("enter the no.: ");
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		if (p%3==0)
		r=p*p;
		s=s+r;
	        p+=3;
	}
	printf("sum of the square is: %d\n",s);
	return 0;	
}
