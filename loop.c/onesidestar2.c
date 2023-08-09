/*

          *
         * *
       * * *
     * * * *
   * * * * *
 * * * * * *
   * * * * *
     * * * *
       * * *
         * *
           *


*/

#include <stdio.h>
int main()
{
	int i,n,r=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=n; j++){
	      if (i+j<=n){
	        printf("  ");
	      }
	      else {
	        printf(" *");
	      }
	   }
	   printf("\n");
	}
	for(int p=1; p<=n; p++){
	  for(int s=1; s<=p; s++){
	       printf("  ");
	  }
	  for(int k=1; k<=n-r; k++){
	      printf(" *");
	  }
	    printf("\n");
	    r++;
	}
	return 0;
}


