#include<stdio.h>
void main()
{
  float sp,discount,net amount;       /*sp=sales amount*/
  printf("Enter sales amount \n");
  scanf("%f",&sp);
  if (sp>=1000)
  {

    printf("\n %f is sales amount",sp);
    discount=0.15*sp;
    printf("\n %f is discount",discount);
    net amount=sp-discount;
    printf("\n %f is net amount",net amount);
  }
  if (sp<=500)
  {

    printf("\n %f is sales amount",sp);
    discount=0.10*sp;
    printf("\n %f is discount",discount);
    net amount=sp-discount;
    printf("\n %f is net amount",net amount);
  }
  else
  {

    printf("\n %f is sales amount",sp);
    discount=0;
    printf("\n %f is discount",discount);
    net amount=sp-discount;
    printf("\n %f is net amount",net amount);
  }
  getch();
}
