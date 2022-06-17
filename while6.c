#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	i = 1;
	
	while(n>=i)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		n--;
	}
}
