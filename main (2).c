#include<stdio.h>
int add(int num1,int num2); 
int main(){
  int num1,num2,sum,diff,prod,div;
  printf("enter two numberd");
  scanf("%d %d",&num1,&num2);
  sum=add(num1,num2);
  prod=num1*num2;
  diff=num1-num2;
  div=num1/num2;
  printf("sum=%d\n",sum);
  printf("prod=%d\n",prod);
  printf("diff=%d\n",diff);
  printf("div=%d\n",div);
}
int add(int a,int b)
{
  return a+b;
}
int diff(int a,int b)
{
  return a-b;
}
int prod(int a,int b)
{
   return a*b;
}
int div(int a,int b)
{
  return a/b;
}
 
  
  
 


