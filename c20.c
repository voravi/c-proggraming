#include<stdio.h>
main()
{
	int i,j,k,l;
	
	for(i=5;i>=1;i--)
	{
		
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		
		for(j=5;j>=i;j--)
		{
			if(j == 5)
			{
				printf("* ");
			}
			printf(" ");
		}
		
		for(l=j+2;l<=5;l++)
		{
			if(l == 5)
			{
				printf("* ");	
			}
			printf("   ");
		}
		
		printf("\n");
	}
}
