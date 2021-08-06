

#include<stdio.h>
#define SIZE 100				//Defining Size.


int str_len(const char s1[]);


void main()
{


	char str[SIZE];
	int length=0;

	printf("Enter a string \n");
	scanf("%[^\n]",str);			//scanning string Till Next Line.

	length=str_len(str);			//Calling Function.

	printf("String length=%d \n",length);

}

int str_len(const char s1[])			//Function defination.
{


	int count=0;
	int i=0;
	for(i=0;s1[i]!='\0';i++)
	{

		count++;
	}
	return count;
}
