#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	
	printf("Enter any string :\n\n");
	gets(str);
	
	int i,j,k,n=0;
	
	n = strlen(str);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[j] == str[i])
			{
				for(k=j;str[k]!='\0';k++)
				{
					str[k] = str[k+1];
				}
			}
		}
	}
	printf("Without repeat charector :\n\n");
	
	printf("\n\nNew string is = %s",str);

}

