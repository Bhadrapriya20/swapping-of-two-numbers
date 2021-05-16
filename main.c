#include<stdio.h>
int main()
{
  int a=7,b=8,t;
  printf("B swap:\n");
  printf("a=%d,b=%d\n\n",a,b);
  t=a;
  a=b;
  b=t;
  printf("A swap:\n");
  printf("a=%d,b=%d\n\n",a,b);
  return 0;
}
