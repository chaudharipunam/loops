#include <stdio.h>
#include <math.h>
int main()
{
	int n,sum=0,c=0,r,t;
	printf("enter the num: ");
	scanf("%d",&n);
	int i=n;
	int q=n;
	while (i>0){
	  r=i%10;
	  c=c+1;
	  i=i/10;
	}
	while (n>0){
	  t=n%10;
	  double p=pow(t,c);
	  sum=sum+p;
	  n=n/10;
	}
	if(sum==q){
	  printf("it is armstrong num");
	}
	else{
	  printf("it is not armstrong num");
	}
	return 0;
}

