#include<stdio.h>
main()
{
	int a[100],n,i,m1,m2;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	m1 = m2;
	
	for(i=0;i<n;i++)
	{
		if(a[i] > m1)
		{
			m2 = m1;
			m1 = a[i];
		}
		else if(a[i] < m2 && a[i] > m1)
		{
			m2 = a[i];
		}
	}
	
	printf("First number = %d\n",m1);
	printf("Second number = %d",m2);
}

