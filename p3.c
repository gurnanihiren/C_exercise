


//Write a C program to reverse the given number in most efficient way.


#include<stdio.h>
#define MAX 100			//Defining Size 10.

void main()
	{
		int i=0,j=0,temp=0,n=0;
		int arr[MAX];	
	
		printf("How Many elements You want to Enter Limit-100!! \n");
		scanf("%d",&n);

		printf("Enter the elements in an array \n");
 	
                for(i=0;i<n;i++)       			 //scanning Array.
		{
			scanf("%d",&arr[i]);
		}	
	
		printf("Before Reversing Array Elements are \n");
	
		for(i=0;i<n;i++)		
		{	
			printf("arr[%d]=%d \n",i,arr[i]);	
		}	
	
		for(i=0,j=n-1;i<j;i++,j--)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
		}
	
		printf("After Reversing Array Elements are \n");    //printing Reversing array.
	
		for(i=0;i<n;i++)
		{
			printf("arr[%d]=%d \n",i,arr[i]);
		}
}
