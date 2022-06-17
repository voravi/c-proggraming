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
	
	m1 = a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i] > m1)
		{
			m2 = m1;
			m1 = a[i];
		}
		else if(a[i] > m2 && a[i] < m1)
		{
			m2 = a[i];
		}
	
	}
	
	printf("\nLargest element is array is = %d\n\n",m1);
	printf("Second Largest element is array is = %d",m2);
}

