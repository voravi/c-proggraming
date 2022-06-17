#include<stdio.h>
main()
{
	int i,j,m,n,sum,digit=1;
	
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
	
	printf("In matrix :\n\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n--------------------\n\n");
	
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum = sum + a[j][i];
		}
		printf("Sum of %d columns is = %d\n",digit,sum);
		digit++;
	}
	

}

