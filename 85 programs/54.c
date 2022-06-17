#include<stdio.h>
main()
{
	int a[100][100],m,n,i,j;
	
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
	
	printf("Elements in box :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	int tra[100][100];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			tra[j][i] = a[i][j];
		}
	}
	
	
	
	printf("Transpose of matrix :\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",tra[i][j]);
		}
		printf("\n");
	}
	
}

