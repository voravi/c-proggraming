#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		
		i++;
	}
}

