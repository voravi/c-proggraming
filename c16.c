#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		
		for(k=i;k>=1;k--)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	
	for(i=4;i>=1;i--)
	{
		
		for(k=i;k>=1;k--)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}
