#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n;
	FILE *fptr;
	char ch;
	fptr = fopen("Documents\\Program.txt","r");
	if(fptr == NULL)
	{
		printf("ERROR!!! File doesn't exist");
		exit(1);
	}

	else
	{
		while(1)
		{
			ch=fgetc(fptr);
			if(ch==EOF)
			{
				break;
			}
			else
			{
				printf("%c",ch);
			}
		}
	}

	fclose(fptr);
	printf("\n\nEnd Of File, press a key to exit the program..");
	getch();

}
