#include<stdio.h>
main()
{
	int i,j,m,n;
	
	printf("Enter array size :\n");
	printf("Rows :");
	scanf("%d",&m);
	
	printf("Columns :");
	scanf("%d",&n);
	
	int a[m][n];
	
	
	// first array
	printf("\n\nEnter first array Elements :\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	// second array
	printf("Enter second array elements :\n");
	int b[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\n--------------------\n\n");
	
	int c[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
}

