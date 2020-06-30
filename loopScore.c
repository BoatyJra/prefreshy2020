/**********************************************************************
 *
 * Write a program that ask the user how many times they want to add a 
 * number then calculate the results. Users can also enter a number as a decimal. 
 * When users enter -1 at the count, the program exit.
 *
 * HINT : Use a for loop inside a while loop. 
 *
 **********************************************************************
 */

#include<stdio.h>

int main()
{
	char numberInput[64];	/* User's input from keyboard */
	char stringInput[64];	/* User's input from keyboard */
	int i;					/* Used in a loop */
	int count = 0;			/* Times that users want to add */
	double sum = 0;			/* Sum of all the values */
	double number = 0;		/* number that user entered */
	
	/* loop and ask users how many times they want to add a number */
	while(1)
	{
		printf("How Many Number You Want To Plus? -1 to End : ");
		fgets(stringInput,sizeof(stringInput), stdin);
		sscanf(stringInput,"%d",&count);

		/* If the input is '-1' the loop stop */
		if(count == -1)
		{
			break;
		}
	
		/* loop and add all the number then store it at a variable */
		for(i=0; i<count; i++)
		{
			printf("Enter Number #%d : ",i+1);
			fgets(numberInput,sizeof(numberInput), stdin);
			sscanf(numberInput,"%lf",&number);
			sum = sum + number;
		}

		printf("The Result is : %g\n",sum);	
	}

	printf("Goodbye!\n");
}
	
		

	
