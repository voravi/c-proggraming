#include<stdio.h>
main()
{
	int a[100],i,n1,n2,n;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	printf("Enter array element :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter number you want to delete:");
	scanf("%d",&n1);
	

	
	for(i=0;i<n;i++)
	{
		if(a[i] == n1)
		{
			a[i] = 0;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
