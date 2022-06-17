/*Write a C program to check whether a year is leap year or not.*/

#include<stdio.h>
main()
{
	int year;
	
	printf("Enter any year :");
	scanf("%d",&year);
	
	if((year%4==0) && ((year%100!=0) || (year %400==0)))
	{
		printf("You enter a leap year..!");
	}
	else
	{
		printf("Not a leap year..");
	}
}
