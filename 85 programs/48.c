#include<stdio.h>
main()
{
	int a[100],i,n,b[100];
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	printf("Enter array element :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		b[i] = a[i];
	}
	
	printf("Array copied :\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] = %d\n",i,b[i]);
	}
	
}

