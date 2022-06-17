#include<stdio.h>
main()
{
	int i,j,n,pos,t;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n\nEnter array elemnts :\n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	
	printf("\n\nNew array is :\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}

