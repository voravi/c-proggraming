#include<stdio.h>
main()
{
	int i,n,j,k,ch,temp;
	
	printf("Enter Array size :");
	scanf("%d",&n);
	
	printf("Enter elements :\n\n");
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter rotate times :");
	scanf("%d",&k);
	
	printf("Press 1 for rotate left\n");
	printf("Press 2 for rotate right\n\n");
	
	printf("Enter your choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			
			for(i=0;i<k;i++)
			{
				temp =a[0];
				
				for(j=0;j<n-1;j++)
				{
					a[j] = a[j+1];
				}
				a[n-1] = temp;
			}
			
			printf("Left rotate array : ");
			
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
			break;
			
		case 2:
			
			for(i=0;i<k;i++)
			{
				temp = a[n-1];
				
				for(j=n-1;j>0;j--)
				{
					a[j] = a[j-1];
				}
				a[j] = temp;
				
				printf("Right rotate array :");
				
				for(i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
			}
			break;
			
			
		default: printf("Invalid choice ..!");
	}

}

