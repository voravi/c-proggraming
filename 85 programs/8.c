#include<stdio.h>
main()
{
	int n,i,sum;
	float p;
	
	int a[100];
	
	printf("Enter five numbers :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<4;i++)
	{
		sum = sum + a[i];
	}
	
	printf("Sum is = %d",sum);
	
	p = sum / 5;
	
	printf("\nPersentage = %.2f",p);
}
