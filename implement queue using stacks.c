#include<stdio.h>
#define SIZE 5

int queue1[SIZE],queue2[SIZE];
int front1=-1,rear1=-1,front2=-1,rear2=-1,count=0;

void Enqueue1(int);
void Enqueue2(int);
int Dequeue1();
int Dequeue2();
void Push(int n);
void Pop();
void Display();

void main()
{
	int choice,in;
	do
	{
	printf("1.Push\n2.Pop\n3.Display\n4.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Enter the element to be inserted: ");
		        scanf("%d",&in);
		        Push(in);
		        break;
		case 2: Pop();
		        break;
		case 3: Display();
		        break;
		case 4: break;
	}
    }while(choice!=4);
}

void Enqueue1(int in)
{
	if(rear1==SIZE-1)
	{
		printf("\nStack is Full and Insertion is not possible\n");
	}
    else
    {
        if(front1==-1)
        front1=0;
        rear1++;
        queue1[rear1]=in;
    }
}
void Enqueue2(int in)
{
        if(front2==-1)
        front2=0;
        rear2++;
        queue2[rear2]=in;
}
int Dequeue1()
{
	if(front1==-1)
	{
        return -1;
    }
    else
    {
    	return queue1[front1++];
    }
}
int Dequeue2()
{
    return queue2[front2++];
}
void Push(int in)
{
	Enqueue1(in);
	count++;
}
void Pop()
{
	int ele1,ele2,i,b;
	for(i=0;i<(count-1);i++)
	{
		ele1=Dequeue1();
		Enqueue2(ele1);
	}
	b=Dequeue1();
	if(b==-1)
	{
		printf("\nStack is Empty and Deletion is not possible\n");
	}
	else
	{
	printf("Popped element is %d\n",b);
    }
	count--;
	front1=-1,rear1=-1;
	for(i=0;i<count;i++)
	{
		ele2=Dequeue2();
		Enqueue1(ele2);
	}
	front2=-1,rear2=-1;
}
void Display()
{
	int i;
	for(i=0;i<=rear1;i++)
	printf("%d\t",queue1[i]);
	printf("\n");
}
