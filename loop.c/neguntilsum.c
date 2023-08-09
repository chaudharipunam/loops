/*

Make a flowchart to keep asking for a number until you enter a negative number. In the end, print the sum of all entered numbers.

*/

#include <stdio.h>
int main(){
	int sum=0;
	int i,n,a;
	printf("enter the num: ");
	scanf("%d",&n);
        for(int i=1; i<=n; i++){
          printf("Number is: ");
	  scanf("%d",&a);
	  if(a>0){
	  sum=sum+a;
	  }
	  else{
	    printf("sum is: %d",sum);
	return 0;
	  }
	}
	printf("sum is: %d",sum);
	return 0;
}
