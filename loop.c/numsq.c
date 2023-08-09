/*

enter the num: 10
1 1
2 4
3 9
4 16
5 25
6 36
7 49
8 64
9 81
10 100


*/

#include <stdio.h>
int main()
{
	int i,n,sq;
	printf("enter the num: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	  sq=i*i;
	  printf("%d %d\n",i,sq);
	}
	return 0;
}
