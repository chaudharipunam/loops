/*

Write a program to print the numbers below 100 that are divisible by 7.

*/

#include <stdio.h>
int main()
{
	int i;
	for(int i=1; i<100; i++){
           if (i%7==0){
	   printf("%d\n",i);
	   i++;
	   }
	 }
	return 0;	
}
