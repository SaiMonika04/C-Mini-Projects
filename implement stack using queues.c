#include<stdio.h>
#define SIZE 50

int stack1[SIZE],stack2[SIZE];
int top1=-1,top2=-1,count=0;

void Push1(int);
void Push2(int);
int Pop1();
int Pop2();
void Enqueue(int);
void Dequeue();
void Display();

void main()
{
	int choice,in;
	do
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element you need to insert: ");
			        scanf("%d",&in);
			        Enqueue(in);
			        break;
			case 2: Dequeue();
			        break;
			case 3: Display();
			        break;
			case 4: break;
		}
	}while(choice!=4);
}

void Push1(int a)
{
	if(top1==SIZE-1)
	printf("\nStack Overflow");
	else
	stack1[++top1]=a;
}
void Push2(int b)
{
	if(top2==SIZE-1)
	printf("\nStack Overflow");
	else
	stack2[++top2]=b;
}
int Pop1()
{
	int n;
	if(top1==-1)
	printf("Stack Empty");
	else
	{
		n=stack1[top1--];
		return n;
	}
}
int Pop2()
{
	int n;
	n=stack2[top2--];
	return n;
}
void Enqueue(int in)
{
	Push1(in);
	count++;
}
void Dequeue()
{
	int ele1,ele2,i,b;
	if((top1==-1) && (top2==-1))
	printf("\nQueue is empty");
	else
	{
		for(i=0;i<count;i++)
		{
			ele1=Pop1();
			Push2(ele1);
		}
		b=Pop2();
		printf("Dequeued element is %d\n",b);
		count--;
		for(i=0;i<count;i++)
		{
			ele2=Pop2();
			Push1(ele2);
		}
	}
}
void Display()
{
	int i;
	if(top1==-1)
	printf("Stack is empty\n");
	for(i=0;i<=top1;i++)
	printf("%d\t",stack1[i]);
	printf("\n");
}
