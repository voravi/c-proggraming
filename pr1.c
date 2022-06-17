#include<stdio.h>
main()
{
	int n,i=1;
	
	printf("Enter any table number :");
	scanf("%d",&n);
	
	
	for(i;i<=10;i++)
	{
		printf("%d * %d = %d",n,i,n*i);
		
		printf("\n");
	}
}
