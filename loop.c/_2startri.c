/*

                * 
            * * * 
        * * * * * 
    * * * * * * * 
* * * * * * * * * 

*/

#include <stdio.h>
int main()
{
   int n,p=1;
   printf("enter the n =  ");
   scanf("%d",&n);
   int r=(n-1)*2;
   for(int i=1; i<=n; i++){
       for(int j=1; j<=r; j++){
          printf("  ");
       }
       for(int k=1; k<=p; k++){
          printf("* ");
       }
       printf("\n");
       r-=2;
       p+=2;
     }
     return 0;
}
