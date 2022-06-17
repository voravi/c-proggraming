#include<stdio.h>
main()
{
	int i,n,pos,num;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n\nEnter array elemnts :\n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter new element :");
	scanf("%d",&num);
	
	printf("\n\nEnter position :");
	scanf("%d",&pos);
	
	n++;
	
	for(i=n-1;i>=pos;i--)
	{
		a[i] = a[i-1];
	}
	a[pos-1] = num;
	
	printf("\n\nNew array :\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}

