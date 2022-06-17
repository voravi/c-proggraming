#include<stdio.h>
main()
{
	int i,n,j,b[100],a[100];
	
	printf("Enter first array size :");
	scanf("%d",&n);
	
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter second array size :");
	scanf("%d",&j);
	
	printf("Enter array elements :\n");
	for(i=0;i<j;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Marging array :\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<j;i++)
	{
		printf("%d ",b[i]);
	}
}
