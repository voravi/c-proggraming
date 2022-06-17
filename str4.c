#include<string.h>
#include<stdio.h>
main()
{
	char str[100],str2[100];
	
	puts("Enter first string :");
	gets(str);
	
	puts("Enter second string :");
	gets(str2);
	
	if(strcmp(str,str2)==0)
	{
		printf("Both string are same");
	}
	else
	{
		printf("string are not same..!");
	}
}
