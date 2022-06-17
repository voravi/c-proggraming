#include<stdio.h>

int main()
{
  int year,i;

  printf("Enter Year: ");
  scanf("%d",&year);
  
  i = 1;
  while(i == 1)
{
  
  if(( year%4==0) && ( (year%400==0) || (year%100!=0) ) )
	{
   		printf("%d is a leap year.",year);
	}
	
  else
 	{
    	printf("%d is not a leap year.",year);
	}
	
		i++;
	
	break;
}
  return 0;
}
