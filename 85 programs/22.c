#include<stdio.h>
main()
{
	int num1,num2,ch;
	

start:	
	printf("\n\nEnter First number :");
	scanf("%d",&num1);
	
	printf("Enter Second number :");
	scanf("%d",&num2);
	
	printf("\nPress 1 for addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for multification\n");
	printf("Press 4 for division\n");
	printf("\nPress 0 for Exit\n");
	
	printf("\nEnter your choice :");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:printf("Addition is = %d",num1 + num2);
				getch();
				goto start;
				
	
		case 2:printf("Subtraction is = %d",num1 - num2);
			break;
			
		case 3:printf("Multification is = %d",num1 * num2);
			break;
			
		case 4:printf("Division is = %d",num1 / num2);
			break;
			
		default:printf("Invalid choice");
	}

}
