//#include<iostream>
#include<string.h>
#include<stdio.h>

void Swep (int *a, int *b) {
	
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a,b;
	
	// Swaping
	
	printf("Befour Swaaping :\n\n");
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	Swep(&a,&b);
	
	printf("\n\nAfter Swepping : \n");
	
	printf("A : %d\n",a);
	printf("B : %d",b);	
	
	return 0;
}

