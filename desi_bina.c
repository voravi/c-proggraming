#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter any value :");
	scanf("%d",&n);
	
	int a[100];
	
	
	while(n != 0)
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

