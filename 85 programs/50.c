   #include <stdio.h>
    void main()
    {
 
        int i, j, b, n, a[100];
        printf("Enter the array size :");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (a[i] > a[j]) 
                {
                    b =  a[i];
                    a[i] = a[j];
                    a[j] = b;
 
                }
            }
        }
 
        printf("The numbers arranged :\n");
        for (i = 0; i < n; ++i)
        {
            printf("%d\n", a[i]);
        }
 
    }
