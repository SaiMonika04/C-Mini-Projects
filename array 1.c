#include<stdio.h>
void main()
{
  int arr[5],i;
  for (i=0;i<=5;i++)
  {
     arr[i]=i;
  }
  printf("Enter the elements:- \n ");
  for (i=0;i<5;i++)
  {
    printf("\n a[%d]=[%d] \n",i,arr[i]);
  }
}
