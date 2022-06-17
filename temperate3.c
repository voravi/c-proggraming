#include<stdio.h>
main()
{
	int n,i=1;
	
	int cub=1;
	
	printf("enter any number :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		cub = i *i *i;
		printf("%d => %d\n",i,cub);
		
		i++;
	}
}

