/*

"Write a program to convert decimal to binary.
If the given decimal is 11, then the output should be 1011 which is the binary for 11"

*/

#include<stdio.h>
int main()
{
	int n,r,i;
	int binary[45];
	i=0;
	printf("enter the num: ");
	scanf("%d",&n);
	while(n>0){
	  r=n%2;
	  binary[i]=r;
	  n/=2;
	  i++;
	}
	printf("Binary Number: ");
	if(i==0){
	  printf("0");
	}
	else{
	  for (int j=i-1; j>=0; j--){
	    printf("%d", binary[j]);
	  }
	}
	return 0;
}
  
    
  
  
