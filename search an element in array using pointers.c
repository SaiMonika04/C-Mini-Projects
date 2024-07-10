#include<stdio.h>
int main()
{
	int arr[20], i, ele, size, *p1;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("\nEnter the elements of the array.... \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	p1 = &arr;
	printf("\nEnter the element which you wanna search in the array: ");
	scanf("%d",&ele);
	for(i=0;i<size;i++)
	{
		if(*p1==ele)
		{
			printf("\nElement found at Index %d",i);
			return 0;
		}
		p1++;
	}
	printf("\nElement not found in the array");
	return 0;
}
