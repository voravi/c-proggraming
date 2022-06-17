#include<stdio.h>
main()
{
	int a[100],n,i,sum=0;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Sum of all elements :");
	
	for(i=0;i<=n;i++)
	{
		sum = sum + a[i];
	}
	
	printf("%d",sum);
}

