


//Write a function that returns index of first matched element from given array. 
//if element is not found it returns -1. e.g. if array[] = {1, 2, 5, 9, 11} and search value entered is "5" than it returns 2. if search value.

#include<stdio.h>
#define MAX 5

int Find_index(int arr[],int num1);			//Function Declaration.

void main()
{


	int arr[MAX];
	int ans=0,i=0,num=0;

	printf("Enter Array Elements \n");		//scanning Array elements.
	for(i=0;i<MAX;i++)
	{

		scanf("%d",&arr[i]);
	}


	printf("Enter the Number you want to Find in an array:\n");
	scanf("%d",&num);


	ans=Find_index(&arr[0],num);			//Function call.

	if(ans==0)					//Comparing Return value.
	{
		
		printf("%d element Found at %d index",num,ans);
	}
	else
	{
		printf("%d element Not Found with return Value %d",num,ans);
	}


}

int Find_index(int *p,int num1)		//Function Defination.
{

	int i=0;
	for(i=0;i<MAX;i++)
	{

		if(p[i]==num1)
		{

			return i;
		}
	}
	return -1;			//Returning Value.
}






	
