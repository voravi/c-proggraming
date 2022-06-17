#include<stdio.h>
nat(int i,int n)
{
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
}

main()
{
	int n;
	int i;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	nat(i,n);
}

