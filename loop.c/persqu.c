#include <stdio.h>
int main()
{
	int i,a,b,sq,c=0;
	printf("enter the initial num: ");
	scanf("%d",&a);
	printf("enter the final num: ");
	scanf("%d",&b);
	for(i=1; i<=b; i++){
	  sq=i*i;
	  if(sq>=a){
	    if(sq<=b){
	      printf("%d\n",sq);
	      c=c+1;
	    }
	  }
	}
	printf("\n");
	printf("%d\n",c);
	return 0;
}

