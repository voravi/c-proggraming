#include<stdio.h>
main()
{
	int i;
	char a[] = {"My name is ravi."};
	
	i = 0;

	while(1)
	{
		getch();
		printf("%c",a[i]);
		
		i++;
		
		if(i==16)
		{
			printf(" ");
			i=0;
		}
	}
}

