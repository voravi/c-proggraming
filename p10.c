/*Write a C program to create Simple Calculator using switch case.*/

#include<stdio.h>
main()
{
	int a,b,ch;
	
	printf("Enter firs value :");
	scanf("%d",&a);
	printf("Enter second value :");
	scanf("%d",&b);
	
	printf("\nPress 1 for addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for multification\n");
	printf("Press 4 for division\n");
	printf("Press 5 for modulus\n");
	
	printf("\nenter choice :\n");
	scanf("%d",&ch);
		
	switch(ch)
	{
		case 1:printf("Addition is = %d",a+b);
			break;
		
		case 2:printf("subtraction is = %d",a-b);
			break;
			
		case 3:printf("multification is = %d",a*b);
			break;
			
		case 4:printf("division is = %d",a/b);
			break;
			
		case 5:printf("modulus is = %d",a%b);
			break;
			
		default :printf("Invalid choice..!");
	}
}
