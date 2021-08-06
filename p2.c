

//Write a C program to find 1's count in binary value of given integer number.

#include<stdio.h>

void main()
{
	
	int num=0,i=0;
	int count=0;
	
	printf("Enter the value of Num \n");
	scanf("%d",&num);			//scanning Num Value
	
	for(i=0;i<=31;i++)
	{
		if(num&(1<<i))
		{
			count++;				
		}		
	}
		
	printf("Number of 1s in a Number are equal to %d \n",count);		//Printing Num.
}
