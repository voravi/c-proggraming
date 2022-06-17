#include<stdio.h>

void sum(int *a,int n)
{
	int i;
	int sum=0;
	
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	
	printf("\n\nSum of array is = %d",sum);
}
main()
{
	
	int i,n;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n\nEnter elements :\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	sum(a,n);
}

