#include <stdio.h>
int main()
{
  int i,n,p=31,s=29;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    if(i%2==0){
      printf("%d ",s);
      s-=7;
    }
    else{
      printf("%d ",p);
      p-=7;
    }
  }
  return 0;
}
