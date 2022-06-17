#include<stdio.h>
main()
{
	int n,i,mul;
	
	printf("Enter value:");
	scanf("%d",&n);
	
	i = 1;
	
	while(i<=n)
	{
		mul = mul * i;
		
		i++;
	}	
	
	printf("Factorial of %d is %d",n,mul);	
}
