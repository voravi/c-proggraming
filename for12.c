#include<stdio.h>
main()
{
	int n,i,ld,fd,sum;
	
	printf("Enter digits :");
	scanf("%d",&n);
	
	ld = n %10;
	
	for(n;10<n;i++)
	{
		n = n / 10;
	}
	fd = n;
	
	sum = fd + ld;
	
	printf("%d\n",sum);
}
