/*

Write a program to show how to find the sum of all the numbers that are divisible by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)

*/

#include <stdio.h>
int main()
{
	int i,p,q,s=0;
	printf("enter the no. of p: ");
	scanf("%d",&p);
	printf("enter the no.of q: ");
	scanf("%d",&q);
        for(int i=1; i<=q; i++){
           if (i%p==0){
               if(i%q==0){
               }
               s=s+i;
           }
        }
        printf("%d\n",s);
        return 0;
}
