/*Write a C program print total number of days in a month 
  using switch case.
*/

#include<stdio.h>
main()
{
	int n;
	printf("Enter Month number (1 to 12):\n");
	scanf("%d",&n);
	
	printf("\n");
	
	switch(n)
	{
	
		case 1:printf("31 days");
			break;
			
		case 2:printf("28 days");
			break;
			
		case 3:printf("31 days");
			break;
			
		case 4:printf("30 days");
			break;
			
		case 5:printf("31 days");
			break;
			
		case 6:printf("30 days");
			break;
			
		case 7:printf("31 days");
			break;
			
		case 8:printf("31 days");
			break;
			
		case 9:printf("30 days");
			break;
			
		case 10:printf("31 days");
			break;
			
		case 11:printf("30 days");
			break;
			
		case 12:printf("31 days");
			break;
			
		default : printf("Invalid choice..!");
	}
}
