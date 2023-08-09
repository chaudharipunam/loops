/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
*

 
*/


#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
	          printf("* ");
	   }
	   printf("\n");
	}
	i=i-1;
	while (i>=1){
	  for(int s=1; s<=i; s++){
	    printf("* ");
	  }
	  printf("\n");
	  i--;
	}
	return 0;
}


