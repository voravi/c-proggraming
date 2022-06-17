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
	
	printf("Odd elements :");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j] % 2 == 1)
			{
				printf("%d ",a[i][j]);
			}
			
		}
	}
	
	
}

