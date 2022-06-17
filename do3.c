#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	i = 1;
	
	do
	{
		printf("%d\n",i);
		
		i++;
	}
	while(i<=n);
}
