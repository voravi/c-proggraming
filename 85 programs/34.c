#include<stdio.h>
main()
{
	int n,i,r,sum=0;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		r = n % i;
		if(r == 0)
		{
			sum = sum + i;
		}
		
	}
	
	if(sum == n)
	{
		printf("%d is perfact number",n);
	}
	else
	{
		printf("%d is not a perfact number",n);
	}
}
