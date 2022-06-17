#include<stdio.h>
main()
{
	int n,i,k=0,j;
	int num=0,pos=0;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter array elements :\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter array  :");
	scanf("%d",&num);
	
	printf("enter position :");
	scanf("%d",&pos);
	
	for(i=n-1;i>=pos;i--)
	{
		a[i+1] = num;
	}
	
	a[pos-1] = num;
	
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}

