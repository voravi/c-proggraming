#include<stdio.h>
main()
{
	int n;
	
	printf("Enter digit (n to 1) :");
	scanf("%d",&n);
	
	printf("\n");
	
	do
	{
		printf("%d ",n);
		n--;
	}
	while(n >= 1);	
	
}

