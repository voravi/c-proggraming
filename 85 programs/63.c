#include<stdio.h>
main()
{
	int a[100][100],m,n,i,j;
	int flag = 0;
	int sum1=0,sum2=0;
	
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
	
	// element in matrix
	
	printf("Elements in matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	int sum = 0;
	
	// sum of diognol
	
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
	
	// sum of rows
	
	for(i=0;i<m;i++)
	{
		sum1 = 0;
		for(j=0;j<n;j++)
		{
			sum1 = sum1 + a[i][j];
			
			if(sum == sum1)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
//				break;
			}
		}
	}
	
	// sum of columns
	
	for(i=0;i<m;i++)
	{
		 sum2 = 0;
		for(j=0;j<n;j++)
		{
			sum2 += a[j][i];
			
			if(sum == sum2)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
//				break;
			}
		}
	}

	if(flag == 1)
	{
		printf("Magic square...");
	}
	else
	{
		printf("Not a magic square");
	}
	
	/*
	
	try : 
	
	 4  9  2
	 3  5  7
	 8  1  6
	
	*/
	
}


