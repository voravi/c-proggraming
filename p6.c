/*Write a C program to input electricity unit charges and calculate total
  electricity bill according to
the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include<stdio.h>
main()
{
	
	int n;
	float sub,t=0,tot;
	
	
	printf("Enter units =");
	scanf("%d",&n);
	
	if(0<=n<=50)
	{
		sub = n*0.5;
	}
	else if(50<n<=150)
	{
		sub = 25 + (n-50)*0.75;
	}
	else if(150<n<=250)
	{
		sub = 100 + (n-150)*1.2;
	}
	else
	{
		sub = 220 + (n-250)*1.5;
	}
	
	t = n *0.20;
	
	tot = t + sub;
	
	printf("\nRupee is = %.2f \n",tot);
	
}





