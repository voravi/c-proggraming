#include<stdio.h>
#include<math.h>
main()
{
   int a, b, c, d;
   int root1, root2, realPart, imaginaryPart;

   printf("Enter cofficients (a, b, and c): ");
   scanf("%d %d %d", &a, &b, &c);

   printf("The quadratic equation: %dx²%dx%+d \n",a,b,c);
   d = (b*b) - 4*a*c; 
}
