/*

enter the number: 6
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
	int p=n;
	for (i=1; i<=n; i++){
	   for (int j=1; j<=p; j++){
		printf("* ");
	   }
	   printf("\n");
	   for(int k=1; k<=i; k++){
	        printf("  ");
	   }
	   p-=1;
	}
	return 0;
}
