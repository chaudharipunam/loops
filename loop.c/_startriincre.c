/*

          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 

*/

#include <stdio.h>
int main()
{
   int i,n,m=1;
   printf("enter the num: ");
   scanf("%d",&n);
   for(i=1; i<=n; i++){
     for(int  j=1; j<=n-i; j++){
       printf("  ");
     }
     for(int p=1; p<=m; p++){
       printf("* ");
     }
     printf("\n");
     m+=2;
   }
   return 0;
}


         
