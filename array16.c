#include<stdio.h>
main()
{
	int i,n,a[100],m1,m2;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("In reverce order :");
	for(i=n-1;i>=0;i--)
	{
		printf("a[%d] = ",i);
		printf("%d \n",a[i]);
	}
}
