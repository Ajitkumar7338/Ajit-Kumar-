#include <stdio.h>

struct book{
int num;
char name[1];
float price;
};
int main()
{
  struct book hp;
  hp.num=2024;
  hp.price=100;
  strcpy(hp.name,"r");
  printf("Book number:%d\n",hp.num);
  printf("Book name:%c\n",hp.name);
  printf("book price:%f\n",hp.price);
}
