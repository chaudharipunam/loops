/*

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
        for (i=1; n>=1; n--){
          for(int j=1; j<=n; j++){
            printf("* ");
          }
          printf("\n");
        }
        return 0;
}
