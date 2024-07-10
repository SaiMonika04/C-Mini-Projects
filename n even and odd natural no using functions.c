#include<stdio.h>
int add(int a, int b)
{
	return (a+b);
}
int main()
{
	int i,n,oddsum=0,evensum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("\nThe Odd Numbers upto %d are...\n",n);
	for(i=1;i<=n;i+=2)
	{
		oddsum = add(oddsum,i);
		if(i==n || i==(n-1))
		{
			printf("%d",i);
		}
		else
		{
			printf("%d, ",i);
		}
	}
	printf("\nSum of odd numbers up to %d is= %d",n,oddsum);
	printf("\n\nThe Even Numbers up to %d are...\n",n);
	for(i=2;i<=n;i+=2)
	{
		evensum = add(evensum,i);
		if(i==n || i==(n-1))
		{
			printf("%d",i);
		}
		else
		{
			printf("%d, ",i);
		}
	}
	printf("\nSum of even numbers upto %d is= %d",n,evensum);
	return 0;
}
