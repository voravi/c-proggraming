#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter any value :");
	scanf("%d",&n);
	
	i = 1;
	
	while(n>=i)
	{
		printf("%d\n",n);
		
		n--;
	}
}
