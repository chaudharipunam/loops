#include <stdio.h>
int main()
{
	int n,d,r,sum=0;
	printf("enter the num: ");
	scanf("%d",&n);
	if(n==0){
	    printf(" zero ");
	  return 0;
	}
	
	while (n>0){
	  r=n%10;
	  sum=sum*10+r;
	  n=n/10;
	}
	  while(sum>0){
	    d=sum%10;
	    if(d==1){
	      printf(" one ");
	    }
	    else if(d==2){
	      printf(" two ");
	    }
	    else if(d==3){
	      printf(" three ");
	    }
	    else if(d==4){
	      printf(" four ");
	    }
	    else if(d==5){
	      printf(" five ");
	    }
	    else if(d==6){
	      printf(" six ");
	    }
	    else if(d==7){
	      printf(" seven ");
	    }
	    else if(d==8){
	      printf(" eight ");
	    }
	    else if(d==9){
	      printf(" nine ");
	    }
	  sum=sum/10;
	}
	return 0;
}



