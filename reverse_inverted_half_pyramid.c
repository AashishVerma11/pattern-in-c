#include <stdio.h>

int main()
{
    int i, j,k, n = 5;

    for (i = 1; i <= n; i++)
    {
        for(j=2; j<=i; j++){
            printf(" ");
        }
        for(k=n; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}