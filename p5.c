/*Write a C program to input month number and print number of days
 in that month*/

#include<stdio.h>
main()
{
	int n;
	
	printf("enter Month number :");
	scanf("%d",&n);
	
	if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
	{
		printf("31 days in month..!");
	}
	else if(n==4 || n==6 || n==9 || n==11)
	{
		printf("30 days in ont..!");
	}
	else
	{
		printf("29 days..!");
	}
}
