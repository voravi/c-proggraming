#include<stdio.h>
main()
{
	int i,j,m,n,num,r,c;
	
	printf("Enter array size :\n");
	printf("Rows :");
	scanf("%d",&m);
	
	printf("Columns :");
	scanf("%d",&n);
	
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
	
	
	printf("\n\nMatrix :\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("\n\nEnter index for delete and add:\n\n");
	printf("Rows :");
	scanf("%d",&r);
	
	printf("Columns :");
	scanf("%d",&c);
	
	printf("\n\nEnter new element :");
	scanf("%d",&num);
	
//	all changes is here
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[r][c] == a[i][j])
			{
				a[i][j] = num;
			}
		}
	}
		
//	print new matrix

	printf("\nNew Matrix is :\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
