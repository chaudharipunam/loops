/*

* 
* * 
* * * 
* * * * 
* * * * * 
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
	printf("enter the num: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	  for(int j=1; j<=i; j++){
	    printf("* ");
	  }
	  printf("\n");
	}
	i=n-1;
	while(i>=1){
	  int p=1;
	  while(p<=i){
	    printf("* ");
	    p++;
	  }
	  printf("\n");
	  i--;
	}
	return 0;
}

   
  
