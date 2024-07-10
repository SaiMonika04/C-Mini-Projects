#include<stdio.h>
int main()
{
	int a,b, *p1, *p2;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	p1 = &a;
	p2 = &b;
	printf("\nBefore swapping, the values are:\na = %d\tb = %d",*p1,*p2);
	//swapping procedure begins
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	//swapping procedure ends
	printf("\nAfter swapping, the values are:\na = %d\tb = %d",*p1,*p2);
	return 0;
}
