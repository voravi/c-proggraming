#include<stdio.h>

int a,b;

add()		//TNRN
{	
	int c;
	c=a+b;
}

void sub(int x, int y)		//TSRN

{
	printf("Subtraction is = %d",x-y);
}

int mul()		//TNRS
{	
	return a*b;
}

int div(int p, int q)		//TSRS
{
	return p/q;
}

int mod()		//TNRS

{
	return a%b;
}


void main()
{
	
	int ch;
	
	printf("a = ");
	scanf("%d",&a);

	printf("b = ");
	scanf("%d",&b);

	do
	{
		printf("\n");

	printf("\nPress 1 for Addition\n");
	printf("Press 2 for Subtraction\n");
	printf("Press 3 for Multification\n");
	printf("Press 4 for Divition\n");
	printf("Press 5 for Modulus\n");
	printf("Press 0 for Terminate\n");

	
	printf("\nEnter Your choice :");
	scanf("%d",&ch);


	switch(ch)
	{
		case 1: printf("Addition is = %d",add());
			break;
		
		case 2: sub(a,b);
			break;
			
		case 3: printf("Multification is = %d",mul());
			break;
		
		case 4: printf("Divition is = %d",div(a,b));
			break;
			
		case 5: printf("MOdulus is = %d",mod());
			break;	
		
	
	
	}
	}
	while(ch != 0);
	
}
