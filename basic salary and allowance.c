/* program to accept basic salary from user,to calculate allowance */
#include<stdio.h>
void main()
{
  int basic;
  int ta;
  int cla;
  float allowance;
  printf("enter the basic salarly\n");
  scanf("%d",&basic);
  ta=400;
  cla=200;
  float da=0;
  da=15*basic/100;
  printf("\n da is %f",da);
  float hra=0;
  hra=12*basic/100;
  printf("\n hra is %f",hra);
  allowance=da+hra+cla+ta;
  printf("\n allowance is %f",allowance);
  float gross=0;
  gross=basic+allowance;
  printf("\n gross is %f",gross);
  /* calculate deductions */
  float ptax=0;
  ptax=10*basic/100;
  printf("\n ptax is %f",ptax);
  float pf=0;
  pf=12*basic/100;
  printf("\n pf is %f",pf);
  int loan;
  loan=1000;
  int rev;
  rev=1;
  float itax=0;
  itax=10*gross/100;
  printf("\n itax is %f",itax);
  float deduction=0;
  deduction=ptax+pf+loan+rev+itax;
  printf("\n deduction is %f",deduction);
  float net=0;
  net=gross-deduction;
  printf("\n net is %f",net);
  getch();
}
