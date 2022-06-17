#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,sum=0,t=0;
	float per=0;
	
	printf("Enter 5 sunject marks :\n");
	
	printf("Subject 1:");
	scanf("%d",&s1);
	
	printf("Subject 2:");
	scanf("%d",&s2);
	
	printf("Subject 3:");
	scanf("%d",&s3);
	
	printf("Subject 4:");
	scanf("%d",&s4);
	
	printf("Subject 5:");
	scanf("%d",&s5);
	
	sum = s1 + s2 + s3 + s4 + s5;
	
	printf("\nSum of number is = %d\n\n",sum);
	
	per = sum / 5;
	
	printf("Percentage is = %.2f\n",per);
	
	t = (int)(per);
	
	
	if(t<=34)
	{
		printf("Grade = E");
	}
	else if(t<=35)
	{
		printf("Grade = D");
	}
	else if(t<=50)
	{
		printf("Grade = C");
	}
	else if(t<=70)
	{
		printf("Grade = B");
	}
	else if(t<=80)
	{
		printf("Grade = A");
	}
	else if(t<=90)
	{
		printf("Grade = A+");
	}
	
}
