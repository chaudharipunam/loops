/*

* * * * * * * * * * 
  *               * 
    *             * 
      *           * 
        *         * 
          *       * 
            *     * 
              *   * 
                * * 
                  * 


*/

#include <stdio.h>
int main()
{
	int i,n,p=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; n>=i; n--){
	   for (int j=1; j<=n; j++){
	     if(n==i){
	       printf("* ");
	     }
	     else if(j==1){
	       printf("* ");
	     }
	     else if(i==p){
	       printf("* ");
	     }
	     else if(j==n){
	       printf("* ");
	     }
	     else{
	       printf("  ");
	     }
	   }
	   printf("\n");
	   for(int k=1; k<=p; k++){
	        printf("  ");
	   }
	   p+=1;
	}
	return 0;
}
