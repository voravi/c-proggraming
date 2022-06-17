#include<stdio.h>

main()
{
	printf("Simple intrest :\n\n");
	int p,r,n;
	float sim=0;
	
	printf("P =");
	scanf("%d",&p);
	
	printf("R =");
	scanf("%d",&r);
	
	printf("N =");
	scanf("%d",&n);
	
	sim = (p*r*n)/100;
	
	printf("\nSimple intrest is = %.2f",sim);

}
