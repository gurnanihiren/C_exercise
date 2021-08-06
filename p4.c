
//Write a C function to invert the bits in given integer variable. The inversion of bits should start from given position and should be done upto given counts.

#include<stdio.h>


int invert_bits(int num1,int start1,int stop1);  			//Function Declarations

void main()
{
	
	int num=0;
	int start=0,stop=0;
	int ans=0;
	
	printf("Enter the value of num to Invert Bit positions \n");
	scanf("%d",&num);
	
	printf("Enter start and stop Bits to Invert Bit Positions \n");
	scanf("%d %d",&start,&stop);					//Scanning start and stop Bits
												
	ans=invert_bits(num,start,stop);     				//Function Call
	
	printf("After Inverting The bits Num becomes %d \n",ans);	
}                                                                                                                                                                   
                                          															
int invert_bits(int num1,int start1,int start2)		//Function defination.
{
	
		int i=0;
		for(i=start1;i<=start2;i++)
		{
			
				num1=(num1^(1<<i));
		}
		
		
		return num1;			//returning int Value
}
