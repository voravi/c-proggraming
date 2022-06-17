#include<stdio.h>
main()
{
	int n,i=1;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	int fact=1;
	
	while(i<=n)
	{
		fact = fact * i;
		
		i++;
	}

	printf("Factorial is = %d",fact);
}

