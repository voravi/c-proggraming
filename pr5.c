#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d * %d = %d",i,i,i*i);
		
		printf("\n");
	}
}
