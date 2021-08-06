
//Write a C program that display given number in string format. e.g. 10 -> ten 100 -> hundred 5270 -> five thousand two hundred seventy

#include<stdio.h>



int main()
{

	int num=0,temp=0;
	
	printf("Enter a number: \n");
	scanf("%d",&num);			//Entering an integer Number.

	temp=num/1000; 				//Checking for Divisor thousand Place
	num=num%1000;				//Checking for Remainder.
	
	switch(temp)
	{
		
			case 1:
				    {
						printf("one thousand ");
						break;
				    }
			case 2:
				    {	
					       printf("two thousand ");
					       break;
			        }
			case 3:
				    {
				    	printf("Three thousand ");
					    break;
				    }
			case 4:
				    {
					    printf("Four thousand ");
					    break;
				    }
			case 5:
				   {
				    	printf("Five thousand "); 
					    break;
				   }
			case 6:
				   {
				    	printf("six thousand ");
				    	break;
				   }
			case 7:
				   {
				    	printf("seven thousand ");
					    break;
				   }
					
			case 8:
				   {
				    	printf("Eight thousand ");
					    break;
					
				   }
			case 9:
			       {
				    	printf("Nine thousand ");
					    break;
			       }
			default :
					{
		//				printf("Zero");
		//				break;
		//
					}
			 
				
	}
	temp=num/100;	//Checking for Divisor
	num=num%100;	//Checking For remainder
	
	switch(temp)
	
	{
		
			case 1:
				    	{
				            printf("one hundred ");
					    break;
				    	}
			case 2:
			       	 	{
				            printf("Two hundred ");
					    break;
				   	}
			case 3:
					{	
				            printf("three Hundred ");
					    break;
					}
			case 4:
					{
					    printf("Four Hundred ");
					    break;
					}
			case 5:
					{
					    printf("Five Hundred ");
					    break;
					}
			case 6:
					{
					    printf("six Hundred ");
					    break;
					}
			case 7:
					{
						printf("seven Hundred ");
						break;
					}
			case 8:
					{
						printf("Eight Hundred ");
						break;
					}
			case 9:
					{
						printf("Nine Hundred ");
						break;				
					}	
	   		default:
	   				{
	//			   		printf("Zero");
	//			   		break;
	   				}
	
	}
	
			if(num==10)			//CHECKING VALUE OF NUM TO IN BETWEEN IF 10 TO 19.
					{
						printf("Ten ");	
					}
	
			else if(num==11)
					{
						printf("Eleven ");
					}
	
			else if(num==12)
					{
						printf("Twelve ");
					}
	
			else if(num==13)
					{
						printf("Thirteen ");
					}
	
			else if(num==14)
					{
						printf("Fourteen ");
					}
	
			else if(num==15)
					{
						printf("Fifteen ");
					}
	
			else if(num==16)
					{
						printf("Sixteen ");
					}
	
			else if(num==17)
					{
						printf("Seventeen ");
					}
	
			else if(num==18)
					{
						printf("Eighteen ");	
					}
	
			else if(num==19)
					{
						printf("Ninteen ");
					}
			else
					{
				
					temp=num/10;				//CHECKING FOR divisor tens place.
					num=num%10;				//Checking for remainder.
					
	switch(temp)
		{
		
			case 2:
					{
						printf("twenty ");
						break;
					}
			case 3:
					{
						printf("Thirty ");
						break;
					}
			case 4:
					{
						printf("Fourty ");
						break;
					}
			case 5:
					{
						printf("Fifty ");
						break;
					}
			case 6:
					{
						printf("sixty ");
						break;	
					}
			case 7:
					{
						printf("seventy ");
						break;
					}
			case 8:
					{
						printf("Eighty ");
						break;	
		    		}
			case 9:
		    		{
						printf("Ninty ");			
		     			break;
	        		}
			default:	
					{
	//					printf("Zero");
	//					break;	
					}
				}
	}
	
	switch(num)							//Checking Unit place in Num.
		{
		
		case 1:				
					{
						printf("one ");
						break;
					}
		case 2:
					{
						printf("two ");
						break;
					}
		case 3:
					{
						printf("Three ");
						break;
					}
		case 4:
					{
						printf("Four ");
						break;
					}
		case 5:
					{
						printf("Five ");
						break;
					}
		case 6:
					{
						printf("six ");
						break;
					}
		case 7:
					{
						printf("Seven ");
						break;
					}
		case 8:
					{
						printf("Eight ");
						break;
					}
		case 9:
					{
						printf("Nine ");		
		    			break;
					}
		default:
					{
						printf("Zero");
						break;		
					}
	}
	return 0;
}
