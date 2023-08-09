/*

105
98
91
84
77
70
63
56
49
42
35
28
21
14
7


*/

#include <stdio.h>
int main()
{
	int i,n=105;
	for (i=7; n>=i; n-=7){
	  printf(" %d ",n);
	}
	return 0;
}
