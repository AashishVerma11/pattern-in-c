#include <stdio.h>

int main() {
    int nr, i, j, nc;

    printf("Enter the number of rows and col: ");
    scanf("%d %d", &nr,&nc);
    

    for (i = 0; i < nr; i++) 
    {
        char a = (i % 2 == 0) ? 'A' + (i / 2) : 'a' + (i / 2);
        
        for (j = 1; j<=nc; j++) 
        {
            printf("%c", a);
        }
        printf("\n"); 
    }

    return 0;
}