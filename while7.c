#include<stdio.h>
main()
{
	int i,n,sum;
	
	printf("Enter any value :");
	scanf("%d",&n);
	
	i = 2;
	
	while(i<=n)
	{
		sum = sum + i;
		
		i++;
	}
	
	printf("\nSum of all velues are :%d",sum);
	
}
