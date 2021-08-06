
//Expand the string......./

//Reverse Not possible and //More than 2 chracters will Not print third character.
#include<stdio.h>
#define MAX 20

void expand_string(char str[]); 		//Function Declaration.
void main()
{

	char s[MAX];
	char b[MAX];

	int i=0,j=0,k=0,l=0;
	char ch;

	printf("ENter a string \n");
        scanf("%s",s);				//scanning string.


	for(i=0;s[i]!='\0';i++)			//Addint a-z,A-Z,0 to 9 Only in an array.
	{

		if(s[i]>='a' && s[i]<='z')
		{

			b[j]=s[i];
			j++;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{

			b[j]=s[i];
			j++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{

			b[j]=s[i];
			j++;
		}
		else
		{
		
		}
		
	}
	b[j]='\0';	
//	printf("%s\n",b);			//printing String excluding All non required characters.

	expand_string(&b[0]);       		//Calling Function.




}
	
void expand_string(char str[])			//Function Defination.

{
	int i=0;
	int  j=0,k=0,l=0;
	printf("Printing Data \n"); 

	 for(i=0;str[i]!='\0';i++)
	 {
	
	 	if(str[i]>='a' && str[i]<='z')
		{
			
			j=str[i];
			k=str[i+1];
			
			for(l=j;l<=k;l++)
			{
				printf("%c",l);
			
		
			}
			i++;
		}
	 
		else if(str[i]>='0' && str[i]<='9')
		{
			j=str[i];
			k=str[i+1];

			for(l=j;l<=k;l++)
			{
				printf("%c",l);

			}

				i++;
		}
		
		else if(str[i]>='A' && str[i]<='Z')
		{

			j=str[i];
			k=str[i+1];
			for(l=j;l<=k;l++)
			{
				printf("%c",l);
			
			}
			i++;
		}
		else
		{
		
			
		}
	 }
}
    


		
