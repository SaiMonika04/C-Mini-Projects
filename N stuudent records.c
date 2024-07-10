#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
	char std_name[50];
	char std_class[10];
	char std_sec[10];
	char std_roll[20];
	int std_age;
	int std_cont;
}STD;

void assumptions()
{
	printf("\t\t\t||ASSUMPTIONS TAKEN|||\n\n");
	printf("-> The User does not enter details of more than 60 students.\n");
	printf("-> All the students use Indian phone numbers with country code \"+91\".");
	printf("\n\nEnter a key to continue...");
	getch();
	system("CLS");
}
void main()
{
	STD s[60];		//by default, I'm assuming the number of students as 60
	int n,i;
	assumptions();
	printf("Enter the number of students(must be less than or equal to 60): ");
	scanf("%d",&n);
	printf("Now, the program will begin accepting the details for students...\n");

	for(i = 1;i<=n;i++)
	{
		printf("\nENTER DETAILS FOR STUDENT NO. %d\n",i);
		printf("Enter Student's First Name: ");
		scanf("%s",&s[i].std_name);
		printf("Enter Student's Class: ");
		scanf("%s",&s[i].std_class);
		printf("Enter Student's Section: ");
		scanf("%s",&s[i].std_sec);
		printf("Enter Student's Roll Number: ");
		scanf("%s",&s[i].std_roll);
		printf("Enter Student's Age: ");
		scanf("%d",&s[i].std_age);
		printf("Enter Student's Contact Number: ");
		scanf("%d",&s[i].std_cont);
	}

	printf("\n\nEnter a key to start displaying the Student Records...");
	getch();
	system("CLS");

	printf("\t\t\t|||STUDENT RECORDS|||\n");

	for(i = 1;i<=n;i++)
	{
		printf("\nSTUDENT NO. %d\n",i);
		printf("\nName : %s\n",s[i].std_name);
		printf("Class : %s\n",s[i].std_class);
		printf("Section : %s\n",s[i].std_sec);
		printf("Roll No. : %s\n",s[i].std_roll);
		printf("Age : %d\n",s[i].std_age);
		printf("Contact Number : +91%d\n",s[i].std_cont);
	}

	printf("\nEnter a key to exit the program..");
	getch();

}
