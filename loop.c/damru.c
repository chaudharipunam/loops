/*

* * * * * 
 * * * * 
  * * * 
   * * 
    * 
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

*/

#include <stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int i=n;
	while(i>0){
	   for (int j=1; j<=n; j++){
	      if(i+j<=n){
	          printf(" ");
	      }
	      else{
	          printf("* ");
	      }
	   }
	   printf("\n");
	   i--;
	}
        for(int p=1; p<=n; p++){
          for (int j=1; j<=n; j++){
            if(p+j<=n){
              printf(" ");
            }
            else{
              printf("* ");
            }
          }
	  printf("\n");
	}
	return 0;
}


