

//Queue/Fifo in c

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void main()
{


	int arr[MAX];
	int count=1,remove_element=0;
	int i=0,op=0,data;
	int j=0,k=0;
	int l=0;
	while(1)                                                    //Asking User to choose a Operation Continously.
	{	
 		printf("Enter the Operation to Perform \n");	
 		printf("1--Enqueue/push  \n");
		printf("2--Deque/pop  \n");
		printf("3--Traversing List \n");
//		printf("4--Removing Elements Directly From Queue \n");
		printf("4--exit \n");
		printf("\n");

	scanf("%d",&op);					   //Scanning OPeration.
	switch(op)
	{

		case 1:						   //Enqueue Operation.
			{

				if(count>5)			
				{
					printf("Queue is Full No space available!! \n");
					exit(0);
				}
				else
				{
					printf("Enter the value of data You want to enter \n");
					printf("\n");
					scanf("%d",&data);		//Entering Desired data From user.
					arr[i]=data;
					i++;
				//	printf("i=%d \n",i);
					count++;
				//	printf("Count=%d",count);	//Prinitng Count Value.
					printf("\n");
				}
				break;
				
			}
		case 2:						//Dequeue Operation.
				{
					if(count<1)
					{

						printf("Queue is Empty!! \n");
						exit(0);
					}
					else
					{
						j=0;
						printf("j=%d \n",j);
						printf("ELement Obtained From queue is %d ",arr[j]);
						printf("\n");

						for(j=0;j<=count-1;j++)
						{

							arr[j]=arr[j+1];
							
						}			
						count--;
						i--;
				//		printf("count=%d \n",count);

					}
					break;

				}

		case 3:					//Printing Elements Present in The Queue.
			{
			
				if(count<1)
				{

					printf("There Are no elements in the Queue!");
				}
				else
				{
				printf("Elements in a Fifo are \n");	
				for(k=0;k<i;k++)
				{

					printf("arr[%d]=%d \n",k,arr[k]);
			//		printf("count=%d \n",count);
				}
			//	printf("k=%d \n",k);
				printf("\n");
				}
				break;
				
			}		

/*		case 5:{
				
				if(count<1)
				{

					printf("Queue is empty \n");
					printf("No element present to remove \n");
				}
				else
				{

				printf("Enter an element You want to remove directly from Queue \n");
				scanf("%d",&remove_element);
				for(l=0;l<i;l++)
				{

					if(arr[l]==remove_element)
					{

						arr[l]=arr[l+1];
						
					}
					printf("Element Removed Successfully!!");
				}
				count--;
				i--;
				}
			}  */
		case 4:									//Exit From Operation.			
			{

				printf("Exit \n");
				exit(0);
			}
		default:								//Invalid Operation.
			{
				printf("Try Again!! \n");
				printf("Invalid Choice! \n");
				break;

			}
	        
	}	

	}
}




