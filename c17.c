#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		
		for(k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++)
	{
		
		for(k=i;k>=1;k--)
		{
			printf("  ");
		}
		
		for(k=i;k<5;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}
