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
	
	printf("Elements in matrix :\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	int sum = 0;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j] == a[j][i])
			{
				sum = sum + a[i][j];
			}
		}
	}
	
	printf("Sum of diognal element : %d",sum);
		
}

