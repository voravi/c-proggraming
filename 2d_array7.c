#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,m,n,ch;
	
	do
	{
		system("CLS");
	
	printf("Enter array size :\n");
	printf("Rows :");
	scanf("%d",&m);
	
	printf("Columns :");
	scanf("%d",&n);
	
	if(m == n)
	{
	
		int a[m][n];
	
		printf("\n\nEnter Elements :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	
		printf("\n\n--------------------\n\n");
	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				
				if(i==m-1 || j==n-1 || i==0 || j==0)
				{
					printf("%d ",a[i][j]);
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		
		printf("\nRows and columns are not same...!");
		
		printf("\n\nPress 1 for retry\n");
		printf("Press 0 for terminate\n\n");
		
		printf("Enter your choice :");
		scanf("%d",&ch);	
	}
		
	}
	while(ch != 0);
	
}

