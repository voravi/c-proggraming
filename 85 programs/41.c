#include<stdio.h>
main()
{
	int a[100],n,i,sml=0;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	sml = a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i] < sml)
		{
			sml = a[i];
		}
	}
	
	printf("Smallest elements is = %d",sml);
	

}

