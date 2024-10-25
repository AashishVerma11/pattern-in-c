#include<stdio.h>

int main(){
    int n,a,b=1;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        a=i-1;
          for(int s=i; s<n; s++){
                printf("  ");
            }
             for(int j=1; j<=i; j++){
                printf("%d ",j);
            }
            for(int j=1; j<i; j++){
                printf("%d ",a);
                a--;
            }  
            printf("\n");
    }
       for(int i=2; i<=n; i++){
              for(int s=1; s<i; s++){
                  printf("  ");
              }
              for(int j=i; j<=n; j++){
                  printf("%d ",b);
                  b++;
              }
              for(int j=n-i; j>=1; j-- ){
                  printf("%d ",j);
                  
              }
              b=1;
              printf("\n");
          }
    return 0;
}