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
			if(a[l][m] % 2 == 1)
			{
				
				printf("Odd number is =%d\n",a[l][m]);
			
			}
			
		}
	}
	

	
	
	
	
}
