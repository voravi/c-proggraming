#include<stdio.h>
main()
{
	int a[100],n,i;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("In reverce :\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("a[%d] = ",i);
		printf("%d\n",a[i]);
	}
}

