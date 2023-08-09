/* 

enter the num: 3
1 2 3 
6 5 4 
7 8 9 

*/

#include<stdio.h>
int main()
{
  int i,n,p=1;
  printf("enter the num: ");
  scanf("%d",&n);
  int s=n;
  for(i=1; i<=n; i++){
    for(int j=1;  j<=n; j++){
      if(i%2==0){
        printf("%d ",p);
        p--;
      }
      else{
        printf("%d ",p);
        p++;
      }
    }
    printf("\n");
    if(i==1){
    p+=2;
    }
    else {
    p+=4;
    }
  }
  return 0;
}
