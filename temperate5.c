#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("Elements are :");
	for(i=1;i<=250;i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			printf("%d ",i);
		}
	}
}

