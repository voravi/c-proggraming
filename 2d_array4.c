#include<stdio.h>
main()
{
	int i,j,m,n,sum=0,count=0;
	float avg=0;
	
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
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = sum + a[i][j];
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			count++;
		}
	}
	
	avg = (float)(sum) / (float)(count);
	
	printf("\n--------------------\n\n");
	
	printf("Sum of all elements : %d\n\n",sum);
	printf("Average is = %.2f",avg);
	
}

