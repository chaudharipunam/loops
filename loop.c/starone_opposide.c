#include <stdio.h>
int main()
{
   int i,n;
   printf("enter the num: ");
   scanf("%d",&n);
   for(i=1; i<=n;  i++){
     for(int j=1; j<=n; j++){
       if(j<=n-i){
         printf("  ");
       }
       else{
         printf("* ");
       }
     }
     printf("\n");
   }
   int t=0;
   for(int s=1; s<=n; s++){
     for(int q=1; q<=t; q++){
       printf("  ");
     }
     for(int f=1; f<=n-t; f++){
       printf("* ");
     }
     printf("\n");
     t++;
   }
   return 0;
}
