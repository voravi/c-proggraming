#include<stdio.h>
main()
{
	int n,p=0,rev=0;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	while(n != 0)
	{
		p = n % 10;
		rev = (rev*10) + p;
		n = n / 10;
	}
	printf("In reverce = %d",rev);
}
