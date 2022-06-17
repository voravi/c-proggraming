#include <stdio.h>
#include <math.h>

main()
{
    
    int n, i;

    
    printf("Enter the number : ");
    scanf("%d", &n);

    
    for (i = 1; i <= 10; i++)
    {
        printf("%d ^ %d = %.0f\n", n, i, pow(n, i));
    }
}
