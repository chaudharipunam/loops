/*

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
    int i,n,p=0;
     printf("enter the no.: ");
     scanf("%d",&n);
     for(i=1; i<=n; i++){
        for(int j=1; j<=n-p; j++){
           printf("* ");
        }
         printf("\n");
        for(int k=1; k<=i; k++){
           printf(" ");
        }
        p++;
     }
     return 0;
}
