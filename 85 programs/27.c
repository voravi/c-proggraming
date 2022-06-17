#include<stdio.h>
main()
{
	int i,fact,n;
	
	printf("Enter any number for factorial :");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		fact = fact * i;
	}
	
	printf("Factorial = %d",fact);
}
