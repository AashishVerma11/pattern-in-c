#include<stdio.h>

int main(){
    int n, i, j, k,l;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf(" ");
        }

        for(k=1; k<=i; k++){
            printf("*");
        }

        if(i>1){
            for(l=2; l<=i; l++){
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}