#include <stdio.h>
int main()
{
	int i,n;
	float s=0.0;
	printf("enter the no.: ");
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		s=s+1.0/i;
	}
	printf("sum of harmonic series up ti %d terms: %.2f\n",n,s);
	return 0;
}



