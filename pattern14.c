#include<stdio.h>
main()
{
	int i,j,n=1;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",n);
			
			n++;
		}
	
		printf("\n");
	}
}

