#include<stdio.h>
void main()
{
  int a,b,sum,sub,mul;
  float div;
  printf("enter two numbers \n");
  scanf("%d %d",&a,&b);
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  printf("\n sum of two numbers is %d",sum);
  printf("\n sub of two numbers is %d",sub);
  printf("\n mul of two numbers is %d",mul);
  printf("\n div of two numbers is %f",div);
  getch();
}
