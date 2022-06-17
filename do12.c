#include<stdio.h>
main()
{
	int n,i,fd,ld,sum;
	
	printf("Enter value :");
	scanf("%d",&n);
	
	ld=n%10;
	
	do
	{
		n = n/10;
			
	}
	while(n>10);
	
	fd = n;

	
	sum = fd + ld;
	
	printf("%d\n",sum);
}
