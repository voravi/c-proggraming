#include<stdio.h>
main()
{
	int i,n,pos;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n\nEnter array elemnts :\n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nEnter position for delet :");
	scanf("%d",&pos);
	
	for(i=pos-1;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	
	
	printf("\n\nNew array :\n\n");
	
	for(i=0;i<n-1;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}

