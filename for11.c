#include<stdio.h>
main()
{
	int n,i,count=0;
	
	printf("Enter numbers :");
	scanf("%d",&n);
	
	for(n;0<n;i++)
	{	
		n = n / 10;
		
		count ++;
	}
	printf("%d\n",count);
}
