#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	
	puts("Enter string :");
	gets(str);
	
	strlwr(str);
	
	puts(str);
}
