#include<stdio.h>
main()
{
	int n,i=1;
	
	printf("Enter factorial :");
	scanf("%d",&n);
	
	for(n;n>=1;n--)
	{
		i = i*n;
	}
	
	printf("Factorial is = %d",i);
}
