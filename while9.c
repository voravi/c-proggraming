#include<stdio.h>
main()
{
	int i,n,sum = 0;
	
	printf("Which table you want to print :");
	scanf("%d",&n);
	
	printf("\n");
	
	i = 1;
	
	while(i<=10)
	{
		while(i<=10)
		{
			printf("%d * %d = %d\n",n,i,n*i);
			
			i++;
		}
		
		sum++;
	}
	
}
