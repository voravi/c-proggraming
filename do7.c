#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("enter value :");
	scanf("%d",&n);
	
	i = 1;

	do
	{
		sum = sum + i;
		i++;
	}
	while(i<=n);
	
	printf("%d\n",sum);
}
