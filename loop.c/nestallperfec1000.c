#include <stdio.h>
int main()
{
  int i,n;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
  int sum=0;
    for( int j=1; j<i; j++){
      if(i%j==0){
        sum+=j;
      }
    }
    if(sum==i){
      printf("%d is perfect no.\n",i);
    }
  }
 
  return 0;
}


