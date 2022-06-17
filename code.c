#include<stdio.h>
main()
{
	int n,a[100],i,num,pos;
	
	printf("Enter array size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter new element :");
	scanf("%d",&num);
	
	printf("\nEnter position :");
	scanf("%d",&pos);
	
	if(pos >= n+1 || pos <= 0)
	{
		printf("Invalid position ...!");
	}
	else
	{
		for(i=n;i>=pos;i--)
			a[i]  =  a[i-1];
		
		a[pos-1] = num;
		
		n++;
	}
	
	printf("\n\nAll elements are :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		printf("%d \n",a[i]);
	}	
	
	
}
