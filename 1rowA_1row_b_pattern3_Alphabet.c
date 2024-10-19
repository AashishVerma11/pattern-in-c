// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int nr, nc;
    
    scanf("%d %d", &nr, &nc);
    
    for(int i=1; i<=nr; i++){
        for(int j=1; j<=nc; j++){
            if(i%2!=0){
                printf("%c",i+64);
            }
            else {
                 printf("%c",i+96);
            }
        }
        printf("\n");
    }
    
    return 0;
}