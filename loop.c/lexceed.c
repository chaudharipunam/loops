/*

Write a program to show how consecutive even numbers starting from 2 are summed up until the sum just exceeds 1000 and then print the sum and the number of even numbers added.

*/

#include  <stdio.h>
int main()
{
	int i,c,s;
	for(i=2;s<1000;i=i+2){
	c++; s=s+i;
	}
	printf("%d\n",c);
	printf("%d",s);
	return 0;
}
