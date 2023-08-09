#include<stdio.h>
int main()
{
  int i,n,p=7,s=10;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    if(i%2==0){
      printf("%d ",s);
      s++;
    }
    else{
      printf("%d ",p);
      p++;
    }
  }
  return 0;
}
