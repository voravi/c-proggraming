#include<stdio.h>
main()
{
	int pri;
	float tot=0;
	
	printf("Enter prize :");
	scanf("%d",&pri);
	
	if(500>=pri)
	{
		printf("\nno offer available");
	}
	else if(pri<=1000)
	{
		tot = pri * 5 / 100;
	}
	else if(pri<=5000)
	{
		tot = pri * 10 / 100;
	}
	else if(pri<=10000)
	{
		tot = pri * 15 / 100;
	}
	else if(pri>10000)
	{
		tot = pri * 20 / 100;
	}
	
	printf("\nyour discount = %.2f\n",tot);
	
	printf("\nYour new prize = %.2f",pri-tot);
}
