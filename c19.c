#include<stdio.h>
main()
{
	int i,j,k,l,m;
	
	for(i=5;i>=2;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
	
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		
		for(k=5;k>i;k--)
		{
			printf("  ");
		}

		for(l=i;l<5;l++)
		{
			printf("  ");
		}
		
		for(m=i;m>=1;m--)
		{
			printf("%d ",m);
		}
		
		printf("\n");
	}

}
