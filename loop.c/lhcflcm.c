#include <stdio.h>

int main() {
	int a, b, c, r, hcf, lcm;
	printf("enter the no. of a: ");
	scanf("%d", &a);
	printf("enter the no. of b: ");
	scanf("%d", &b);
	
	c=a*b;
	
	while( b>0){
		r=a%b;
		a=b;
		b=r;
	}
	hcf=a;
	
	lcm=(c/hcf);
	
	printf("hcf: %d\n",hcf);
	printf("lcm: %d\n",lcm);
	
	return 0;
}



