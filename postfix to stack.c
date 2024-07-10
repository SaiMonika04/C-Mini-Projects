#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int stack[25]={0};
int top=-1;
int ch;
void push(int ele)
{
    if(top==24)
        printf("\nStack is Full");
    else
    {
        top++;
        stack[top]=ele;
    }
}
int pop()
{
    if(top==-1)
        printf("Stack is Empty");
    else
    {
        ch=stack[top];
        top--;
    }
    return ch;
}
void display()
{
    int i;
    printf("\nStack=");
    for(i=0;i<=top;i++)
    printf(" | %d",stack[i]);
}
void main()
{
    char postfix[25]={'\0'},ele;
    int i=0,num1,num2,ans;
    printf("Enter Postfix Expression : ");
    scanf("%s",&postfix);
    printf("\nPostfix Expression : %s",postfix);
    while(i<=strlen(postfix)-1)
    {
        ele=postfix[i];
        if(isdigit(ele))
        {
            push(ele-'0');
        }
        else
        {
            num1=pop();
            num2=pop();
            switch(ele)
            {
                case'^':
                    ans=pow(num2,num1);
                    break;
                case'/':
                    ans=num2/num1;
                    break;
                case'*':
                    ans=num2*num1;
                    break;
                case'+':
                    ans=num2+num1;
                    break;
                case'-':
                    ans=num2-num1;
                    break;
            }
            push(ans);
        }
        display();
        i++;
    }
    printf("\nAnswer = %d",pop());
}
