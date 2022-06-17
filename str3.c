#include<stdio.h>
#include<string.h>
main()
{
	char str[100],str2[100];
	
	puts("Enter first string :");
	gets(str);
	
	puts("Enter second string :");
	gets(str2);
	
	strcat(str,str2);
	
	puts(str);
}
