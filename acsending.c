#include<stdio.h>
main()
{
	int n,i,k=0,j;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter array elements :\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	
	printf("Array in ascending order :\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

}

