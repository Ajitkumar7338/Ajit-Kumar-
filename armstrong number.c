#include <stdio.h>
int main()
{
  int n,originalNum,remainder,result=0,digits=0;
  printf("enter the number:");
  scanf("%d",&n);
  originalNum=n;

  while(originalNum!=0){
    originalNum/=10;
    digits++;
    printf("iteration:%d,digits counted so far:%d\n",digits,digits);
     }
  originalNum=n;
  while(originalNum!=0){
    remainder = originalNum%10;
    result+=pow(remainder,digits);
    originalNum/=10;
    }
  if(result==n)
    printf("%d is an armstrong number",n);
  else
    printf("%d is not an armstrong number",n);
  
}

  
  
