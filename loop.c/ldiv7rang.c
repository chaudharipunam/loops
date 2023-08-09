/*

Write a program to show how to find all even natural numbers that are divisible by 7 in a given range. (Input lower and upper limit of the range from the user)

*/

#include <stdio.h>
int main()
{
	int m,n;
	printf("enter the no. of m: ");
	scanf("%d",&m);
	printf("enter the no.of n: ");
	scanf("%d",&n);
	for (m=1; m<=n; m++){
	    if (m%2==0){
	       if(m%7==0){
	        printf("%d\n",m);
	       }
	    }
	 }
	 return 0;
}
	
