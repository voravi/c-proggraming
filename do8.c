#include<stdio.h>
main()

{
	int n,i;
	
	printf("Enter year :");
	scanf("%d",&n);
	
	do
	{
		if(((n % 4 == 0) && (n % 100!= 0)) || (n%400 == 0))
		{
			printf("You entered leap year...");
		}
		else
		{
			printf("This is not a leap year...");
		}
	
	}
	while(i>=n);
}
