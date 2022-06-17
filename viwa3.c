#include<stdio.h>
main()
{
	int n;
	
	printf("Enter any year (1880 to 1990) : ");
	scanf("%d",&n);
	
	if(n%4 == 0 && n%100 != 0 || n%400 == 0)
	{
		printf("\n\n%d is leap year...",n);
	}
	else
	{
		printf("\n\n%d isn't a leap year...",n);
	}
}

