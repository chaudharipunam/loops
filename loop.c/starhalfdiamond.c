#include <stdio.h>
int main()
{
   int i,n,s=0;
   printf("enter the num: ");
   scanf("%d",&n);
   int p=n+2;
   for(i=1; i<=n;  i++){
     for(int j=1; j<=p-s; j++){
       if(j<=s){
         printf("  ");
       }
       else{
         printf("* ");
       }
     }
     for(int t=1; t<=s; t++){
       printf("  ");
     }
     printf("\n");
    s++;
   }
   return 0;
}
