#include<stdio.h>
main()
{
	int n1,n2,n3,n;
	
	printf("Enter first array size :");
	scanf("%d",&n1);
	
	printf("enter second array size :");
	scanf("%d",&n2);
	
	n3 = n1 + n2;
	
	int a[n1],i;
	
	int b[n2],c[100];
	
	printf("\nEnter first array elements :\n");
	
	for(i=0;i<n1;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
		c[i] = a[i];
	}
	
	printf("\n\nEnter second array elements :\n");
	
	int k = n1;
	
	for(i=0;i<n2;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
		
		c[k] = b[i];
		k++;
	}
	
	printf("\n\nMarged array :\n");
	
	for(i=0;i<n3;i++)
	{
		printf("c[%d] = ",i);
		printf("%d\n",c[i]);
	}
	
	
	
}

