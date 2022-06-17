#include<stdio.h>
main()
{
	int i,n,cub=0;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		cub = i * i;
		
		printf("%d => %d\n",i,cub);
		
		i++;
	}
}
