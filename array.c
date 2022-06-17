#include<stdio.h>
main()
{
	int i,j,l,m;
	
	printf("Enter Array size:");
	scanf("%d%d",&i,&j);
	
	int a[i][j];
	
	printf("Enter array elements :\n");
	
	for(l=0;l<i;l++)
	{
		for(m=0;m<j;m++)
		{
			scanf("%d",&a[l][m]);	
		}
	}
	
	
	
		for(l=0;l<i;l++)
	{
		for(m=0;m<j;m++)
		{
			printf("Value of a[%d][%d] =%d\n",l,m,a[l][m]);
		}
	}
	

	
	
	
}
