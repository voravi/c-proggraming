#include<stdio.h>
main()
{
	int i,n,count=0;
	
	printf("Enter any digit :");
	scanf("%d",&n);
	
	while(n != 0)
	{
		n = n / 10;
		count++;
	}
	
	printf("Digits = %d",count);
}
