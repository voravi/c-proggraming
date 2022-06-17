#include<stdio.h>

int main()
{
	
	int i,n;
	
	printf("Enter the Limit : ");
	scanf("%d",&n);
	
	printf("\n\nSquare series is : "); 
	
	for(i = 1; i<=n; i++)
	{
		printf("%d ",i *i);
	}
	
	return 0;
	
}
