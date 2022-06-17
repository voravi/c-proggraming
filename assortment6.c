#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,m,n,ch,r,c;
	
lable:
	system("ClS");
	printf("Enter first array size : \n\n");
	
	printf("Rows :");
	scanf("%d",&m);
	
	printf("columns :");
	scanf("%d",&n);
	
	r = m;
	c = n;
	
	printf("\nEnter elements :\n\n");
	
	int a[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
//	second array

	printf("\nEnter second array size : \n\n");
	
	printf("Rows :");
	scanf("%d",&m);
	
	printf("columns :");
	scanf("%d",&n);
	
	printf("\nEnter elements :\n\n");
	
	int b[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	if(m==n && r==c && m==r && n==c)
	{
		printf("\nFirst matrix :\n\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				 printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		
		printf("\nsecond matrix :\n\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				 printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		
		int c[50][50];
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		
		printf("\nAddition of Marrix is :\n\n");
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		
		printf("\n\nPress 1 for repeat\n");
		printf("Press 0 for terminate\n\n");
		
		printf("Enter your choice :");
		scanf("%d",&ch);
			
		if(ch == 1)
		{
			goto lable;
		}
	}
	else
	{
		printf("\nMatrix are not same...!");
		
		printf("\n\nPress 1 for retry\n");
		printf("Press 0 for terminate\n\n");
		
		printf("Enter your choice :");
		scanf("%d",&ch);
			
		if(ch == 1)
		{
			goto lable;
		}
		else
		{
			printf(" ");
		}
	}
		
}
