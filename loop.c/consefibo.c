#include <stdio.h>
int main()
{
	int i,n;
	int a=0,b=1,c;
	printf("enter the no.: ");
	scanf("%d",&n);
	printf("fibonacci series up to %d",n);
	for (int i=1; i<=n; i++){
		if (i==1){
		printf("%d",a);
		} else if (i==2){
		printf("%d",b);
		} else {
		  c=a+b;
		  printf("%d",c);
		  a=b;
		  b=c;
	        }
	}
	return 0;
}


