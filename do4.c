#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	i = 1;
	do
	{
		printf("%d\n",n);
		
		n--;
		
	}
	while(n>=i);
}
