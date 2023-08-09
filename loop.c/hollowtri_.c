/*

* 
* * 
*   * 
*     * 
*       * 
*         * 
*           * 
*             * 
*               * 
* * * * * * * * * * 

*/

#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	   for(int j=1; j<=i; j++){
	     if (i==n){
	       printf("* ");
	     }
	     else if (j==1){
	       printf("* ");
	     }
	     else if(j==i){
	       printf("* ");
	     }
	     else{
	       printf("  ");
	     }
	   }
	   printf("\n");
	}   
	return 0;
}

