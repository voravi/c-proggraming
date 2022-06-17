#include<stdio.h>
main()
{
	int a[100][100],m,n,i,j,b[100][100];
	
	printf("Enter array size :\n");
	
	printf("Rows :");
	scanf("%d",&m);
	
	printf("Columns :");
	scanf("%d",&n);
	
	printf("Enter Elements :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter second array Elements :\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		
	int c[100][100];	

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Sum is :\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}		
	

}

