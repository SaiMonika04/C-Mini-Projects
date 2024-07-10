#include<stdio.h>
void main()
{
  int grades;
  printf("Enter a number \n");
  scanf("%d",&grades);
  if (grades>=1 && grades<=100)
    if (grades>=40)
      printf("PASS");
    else
      printf("FAIL");
  else
    printf("please enter grades between 0 to 100 only");
  getch();
}
