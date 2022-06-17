#include<stdio.h>
main()
{
	int n,i;
	
	printf("enter value :");
	scanf("%d",&n);
	
	i = 1;
	
	do
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		
		i++;
	}
	while(i<=n);
}
