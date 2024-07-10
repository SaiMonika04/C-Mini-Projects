/*using nested if to find greatest of 3 numbers*/
#include<stdio.h>
void main()
{
  int a,b,c;
  printf("enter three numbers \n");
  scanf("%d%d%d",&a,&b,&c);
  if (a>b)      /*outer if*/
  {
      if(a>c)   /*inner if*/
      {
           printf("a=%d is greater",a);
      }
  }
  if (b>a)      /*outer if*/
  {
      if(b>c)   /*inner if*/
      {
           printf("b=%d is greater",b);
      }
  }
  if (c>a)      /*outer if*/
  {
      if(c>b)   /*inner if*/
      {
           printf("c=%d is greater",c);
      }
  }
  getch();
}
