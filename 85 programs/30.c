#include<stdio.h>
main()
{
	int num,fir,sec,sum,count=0;
	printf("Enter turm :");
	scanf("%d",&num);
	
	printf("Enter first number :");
	scanf("%d",&fir);
	
	printf("Enter second number :");
	scanf("%d",&sec);
	
	printf("Febonacci series : %d %d ",fir,sec);
	
	while(count<num)
	{
		sum = fir + sec;
		printf("%d ",sum);
		fir = sec;
		sec = sum;
		count++;
	}
	
	
}
