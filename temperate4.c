#include<stdio.h>
main()
{
	int sum=0;	int i;
	
	for(i=19;i<=137;i++)
	{
		if(i % 2 == 1)
		{
			printf("%d ",i);
			sum = sum + i;
		}
	}
	
	printf("\n\nSum is = %d",sum);
}

