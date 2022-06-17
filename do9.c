#include<stdio.h>
main()

{
	int n,i,sum;
	
	printf("Enter number :");
	scanf("%d",&n);
	
	i = 1;
	
	do
	{
		sum = sum * i;
		
		i++;
	}
	while(i<=n);
	
	printf("%d\n",sum);
}
