#include<stdio.h>
main()
{
	int i,j,l,m;
	
	printf("Enter Array size:");
	scanf("%d%d",&i,&j);
	
	int a[i][j];
	int b[i][j];
	int c[i][j];
	
	printf("Enter array elements :\n");
	
	for(l=0;l<i;l++)		//first
	{
		for(m=0;m<j;m++)
		{
			scanf("%d",&a[l][m]);
			
		}
	}

	printf("Enter second array :\n");
	for(l=0;l<i;l++)		//second
	{
		for(m=0;m<j;m++)
		{
			scanf("%d",&b[l][m]);	
		}
	}	
	
	
	for(l=0;l<i;l++)
	{
		for(m=0;m<j;m++)
		{
			c[l][m] = a[l][m] + b[l][m];
		}
	}
	
	for(l=0;l<i;l++)
	{
		for(m=0;m<j;m++)
		{
			printf("a[%d][%d] = %d\n",l,m,c[l][m]);
		}
	}
	
	
	
	
}
