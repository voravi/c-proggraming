#include<stdio.h>
main()
{
	int sal;
	float tot;
	
	printf("Enter your salery :");
	scanf("%d",&sal);
	
	if(sal<=10000)
	{
		tot = sal * 5 / 100;
	}
	else if(sal<=20000)
	{
		tot = sal * 10 / 100;
	}
	else if(sal<=50000)
	{
		tot = sal * 15 / 100;
	}
	else if(sal>50000)
	{
		tot = sal * 20 / 100;
	}
	
	printf("\nyour Incarement = %.2f\n",tot);
	
	printf("Your New Salery = %.2f",sal + tot);
}
