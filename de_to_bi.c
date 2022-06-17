#include<stdio.h>
main()
{
	int n,i=0,a[100];
	
	printf("Enter any value :");
	scanf("%d",&n);
	
	while(n > 0)
	{
		a[i] = n % 2;
		
		n = n / 2;
		
		i++;
	}
	
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}

