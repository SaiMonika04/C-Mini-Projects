/*using nested if to find greatest of 4 numbers*/
#include<stdio.h>
void main()
{
  int a,b,c,d;
  printf("enter four numbers \n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if (a>b)      /*outer if*/
  {
      if(a>c)   /*inner if*/
      {
          if (a>d)   /*inner f*/
          {
              printf("a=%d is greater",a);
          }
      }
  }
  if (b>a)      /*outer if*/
  {
      if(b>c)   /*inner if*/
      {
          if (b>d)   /*inner f*/
          {
              printf("b=%d is greater",b);
          }
      }
  }
  if (c>b)      /*outer if*/
  {
      if(c>a)   /*inner if*/
      {
          if (c>d)   /*inner f*/
          {
              printf("c=%d is greater",c);
          }
      }
  }
  if (d>b)      /*outer if*/
  {
      if(d>c)   /*inner if*/
      {
          if (d>a)   /*inner f*/
          {
              printf("d=%d is greater",d);
          }
      }
  }
  getch();
}























