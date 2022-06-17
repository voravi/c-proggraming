#include<stdio.h>

main()
{
	int i,j,p,u;
	
	for(i=1,u=5;i<=5;i++,u--)
	{
		p=u;
		for(j=i;j<=5;j++)
		{
			printf("%i",p);
			p--;
		}
		printf("\n");
	}
}

