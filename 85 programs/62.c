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
	
	int sml;
	
	sml = a[0][0];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j] < sml)
			{
				sml = a[i][j];
			}
		}
	}
	
	printf("Smallest element in array is = %d",sml);
	
}


