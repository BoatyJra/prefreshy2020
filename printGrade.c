/***************************************************
 *
 * Write a Program that ask the Score from the user. 
 * Then, print the grade from the format below :
 *
 * A = 80 or more
 * B = More than 69 and less than 80
 * C = More than 59 and less than 70
 * D = More than 49 and less than 60
 * F = Less than 40
 *
 ****************************************************/

#include<stdio.h>

int main()
{
	char stringInput[128]; /* User input from keyboard */
	int score = 0;		   /* Score that user entered */
	
	printf("Enter Your Score: ");
	fgets(stringInput,sizeof(stringInput),stdin);
	sscanf(stringInput,"%d",&score);

	if(score >= 80)
	{
		printf("Your Grade is 'A', Congratulations!\n");
	}
	else if((score >= 70) && (score < 79))
	{
		printf("Your Grade is 'B', Keep Up The Good Work!\n");
	}
	else if((score >= 60) && (score < 69))
	{
		printf("Your Grade is 'C', I Know You Could Do Better!\n");
	}
	else if((score >= 50) && (score <59))
	{
		printf("Your Grade is 'D', I Think You Need To Study More!\n");
	}
	else
	{
		printf("Your Grade is 'F', You've Failed The Course\n");
	}
}
	
