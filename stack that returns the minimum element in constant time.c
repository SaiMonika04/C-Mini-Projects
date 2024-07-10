#include<stdio.h>
#define SIZE 20
int A[SIZE],B[SIZE],top1=-1,top2=-1;

void Push(int);
void Pop();
void Push1(int);
void Pop1();
void Min();
void DisplayA();

void main()
{
	int choice,in;
	do
	{
		printf("1.Push\n2.Pop\n3.Minimum\n4.DiaplayA\n5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the value to be inserted: ");
			       scanf("%d",&in);
			       Push(in);
			       break;
			case 2:Pop();
			       break;
			case 3:Min();
			       break;
			case 4:DisplayA();
			       break;
			case 5:break;
		}
	}while(choice!=5);
}

void Push(int in)
{
	if(top1==SIZE-1)
	printf("Stack Overflow\n");
	else
	A[++top1]=in;
	if(top2==-1)
	B[++top2]=in;
	if(top1>0 && A[top1]<=A[top2])
	Push1(in);
}

void Push1(int in)
{
    B[++top2]=in;
}

void Pop()
{
	int h;
	if(top1==-1)
	printf("Stack Underflow\n");
	else if(A[top1]==B[top2])
	Pop1();
	h=A[top1--];
	printf("Popped value is %d\n",h);
}

void DisplayA()
{
	int i;
	for(i=0;i<=top1;i++)
	printf("%d\t",A[i]);
	printf("\n");
}

void Pop1()
{
	int j;
	j=B[top2--];
	printf("Minimum element is %d\n",j);
}

void Min()
{
	Pop1();
}
