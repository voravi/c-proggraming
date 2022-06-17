#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i,n;
	
	printf("Enter any string :\n\n");
	gets(str);
	
	printf("\n\nName without space : \n\n");
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] == ' ')
		{
			continue;
		}
		else
		{
			printf("%c",str[i]);
		}
	}
}
