/*

    *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *


*/

#include<stdio.h>
int main()
{
   int i,n,m=1;
   printf("enter the no.: ");
   scanf("%d",&n);
      for(i=1; i<=n; i++){
         for(int j=1; j<=n-i; j++){
           printf(" ");
         }
         for(int p=1; p<=m; p++){
            printf("*");
         }
          printf("\n");
          m+=2;
      }
      m=m-4;
      for(int s=1; s<=n-1; s++){
        for(int r=1; r<=s; r++){
           printf(" ");
        }
        for(int q=1; q<=m; q++){
           printf("*");
        }
         printf("\n");
         m-=2;
      }
      return 0;
}
