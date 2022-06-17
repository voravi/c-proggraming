#include<stdio.h>
main()
{
	int n,i,mul=1;
	
	printf("Enter factorial :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		mul = mul * i;
	}
	
	printf("%d\n",mul);
	
}
