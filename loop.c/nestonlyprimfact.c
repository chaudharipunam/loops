/*

enter the num: 165
it is prime factor:  3
it is prime factor:  5
it is prime factor:  11


*/

 #include<stdio.h>
int main()
{
  int i,n,count;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=2; i<=n; i++){
    if(n%i==0){
       count=0;
       for(int j=1;  j<=i; j++){
          if(i%j==0){
             count++;
          }
       }
  
      if (count==2){
        printf("it is prime factor:  %d\n",i);
      }
    }
  }

  printf("\n");
 
  return 0;
}
