#include<stdio.h>

float average(float a, float b)
{
	return (a/b);
}
float add(float a, float b)
{
	return (a+b);
}
int main()
{
	int i;
	float n,sum = 0.0,avg;
	printf("Enter 10 numbers...\n");

	for(i=0;i<10;i++)
	{
		scanf("%f",&n);
		sum = add(sum,n);
	}

	avg = average(sum,i);

	printf("The sum of all the entered numbers is: %.2f\n",sum);
	printf("The average of all the entered numbers is: %.2f",avg);
	return 0;
}
