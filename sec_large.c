#include<stdio.h>
main()
{
	int a[100];
	int n,i;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("\nAll elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
//	find second largest number
	
	int l,l2;
	
	l = a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i] > l)
		{
			l2 = l;
			l = a[i];
		}
		else if(a[i] > l2 && a[i] < l)
		{
			l2 = a[i];
		}
	}
	
	printf("\nLargest is = %d",l);
	printf("\nSecond largest = %d",l2);
}

