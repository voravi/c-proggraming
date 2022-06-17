#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	i = 1;
	
	do
	{
		
		do
		{
			
			printf("%d * %d = %d\n",n,i,n*i);
			
			i++;
			
		}
		while(i<=n);
		
		
	}
	while(i<=10);
}
