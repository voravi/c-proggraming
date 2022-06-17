#include<stdio.h>
# define PI 3.14
main()
{
	char ch;
	int l,h,len;
	float r,red,hgt;
	
	printf("What do you want to find...?\n\n");
	
	printf("Enter a for area of circle\n");
	printf("Enter b for area of rectangle\n");
	printf("Enter c for area of square\n");
	printf("Enter d for area of cylinder\n\n");
	
	printf("Enter Your choice :");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
					printf("Enter redius :");
					scanf("%f",&r);
					
					printf("Area of circle is = %.2f",PI*r*r);
					
			break;
			
		case 'b':
					printf("Enter length :");
					scanf("%d",&l);
					
					printf("Enter height :");
					scanf("%d",&h);
					
					printf("Area of rectrangle is = %d",l*h); 
			break;
			
		case 'c':
					printf("Enter length :");
					scanf("%d",&len);
					
					printf("Area of square is = %d",len*len);
			break;
			
		case 'd':
					printf("Enter redius :");
					scanf("%f",&red);
					
					printf("Enter height :");
					scanf("%f",&hgt);
					
					printf("Area of cylinder is = %.2f",(2*PI*red*hgt) + (2*PI*red*red));
			break;
			
		default:printf("Invalid choice...!");
	}
	
}
