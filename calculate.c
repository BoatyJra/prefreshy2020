/***********************************************************
 *
 * Write a program that calculate your age and print the result
 * when you graduated from KMUTT 
 *
 ***********************************************************
 */

#include <stdio.h>

int main()
{
	int age = 19;	/*Your Age*/
	int years = 3;	/*The Years you stay in University*/
	int gradResult = age+years;	/*Actual age when graduate*/

	printf("My name is Boat\n");
	printf("When I graduate from KMUTT I will be %d years old\n",gradResult);
}