#include<string.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	char str[100],str2[100];
	int i,n,n2,a=0,b=0,c=0,d=0;
	int ch;
	
do
{
	system("CLS");
	
	printf("Building a password :\n\n");
	
	printf("1. A password must be at least 6 characters long.\n\n");
	printf("2. A password must contain at least one alphabet, one digit, and a special character.\n\n");
	
	printf("Enter Password :");
	gets(str);
	
	printf("\n\nComfirm password :");
	gets(str2);
	
	n = strlen(str);
	n2 = strlen(str2);
	
//	printf("%d %d",n,n1);
	
	if(n > 6)
	{
		if(n == n2)
		{
			for(i=0;str[i]!='\0';i++)
			{
				if(str[i] >= '0' && str[i] <= '9')
				{
					a++;
				}
				else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
				{
					b++;
				}
				else
				{
					c++;
				}
			}
		}
	}

	
//	printf("%d\n\n%d\n\n%d",a,b,c);
	
	if(a >= 1 && b >= 1 && c >= 1)
	{
		printf("\n\nValid Password");
	}
	else
	{
		printf("\n\nInvalid Password.");
	}
	
	printf("\n\nPress 1 for Repeat\n");
	printf("Press 0 for exit\n\n");
	
	printf("Enter your choice :");
	scanf("%d",&ch);
	
}
while(ch != 0);
}
