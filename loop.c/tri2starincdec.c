#include <stdio.h>
int main()
{
	int i,n,r=1;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for (i=1; n>=i; n--){
	   for (int j=1; j<=n; j++){
	     printf("* ");
	   }
	   printf("\n");
	}
	for(int i=1; i<=k; i++){
	   for(int p=1; p<=i; p++){
	     printf("* ");
	   }
	   printf("\n");
	}
	
	return 0;
}


