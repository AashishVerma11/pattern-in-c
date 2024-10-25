 /*               5 5 5 5 5 
                   4 4 4 4 
                    3 3 3 
                     2 2 
                      1 
                     2 2 
                    3 3 3 
                   4 4 4 4 
                  5 5 5 5 5  */

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,a;
    
    scanf("%d",&n);
    a=n;
    for(int i=1; i<=n; i++){
        for(int s=1; s<i; s++){
            printf(" ");
        }
        for(int j=i; j<=n; j++){
            printf("%d ",a);
        }
        a--;
       printf("\n");
    }
       for(int i=2; i<=n; i++){
            for(int s=i; s<n; s++){
                printf(" ");
            }
            for(int j=1; j<=i; j++){
                printf("%d ",i);
            }
            printf("\n");
        }


    return 0;
}                  