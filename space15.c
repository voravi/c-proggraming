#include<stdio.h>
main()
{
	int i,j,k,l,m;
	
	// outer
	for(i=5;i>=1;i--)
	{
		
		// numeric
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		
		// spaceing
		for(l=5;l>i;l--)
		{
			printf("  ");
		}
		
		// spaceing
		for(m=5;m>i;m--)
		{
			printf("  ");
		}
		
		// numeric
		for(k=i;k>=1;k--)
		{
			printf("%d ",k);
		}
		
		printf("\n");
	}
}

