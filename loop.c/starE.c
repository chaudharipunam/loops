/*

*********
*        
*        
*        
*********
*        
*        
*        
*********


*/

#include <stdio.h>
int main()
{
int i,n;
printf("enter the num: ");
scanf("%d",&n);
if(n%2==0){
  printf("there is no diagram because of number is even %d\n",n);
}
else {
   for(i=1; i<=n; i++){
     for (int j=1; j<=n; j++){
       if(i==1){
         printf("*");
       }
       else if(i==n){
         printf("*");
       }
       else if(i==n/2+1){
         printf("*");
       }
       else if(j==1){
         printf("*");
       }
       else{
         printf(" ");
       }
     }
     printf("\n");
   }
}
   return 0;
}
