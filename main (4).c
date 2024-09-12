#include<stdio.h>
void test(){
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  if(n/2==0){
    printf("the numbr is even ");
    
  }else{
    printf("the given number is odd");
  }
  }

int main(){
  test();
}