/* 1  2  3  4  5
   6  *  *  *  7
   8  *  *  *  9
  10  *  *  * 11
  12 13 14 15 16  */


#include <stdio.h>

int main() {
    int r, c, nr,nc,a=1;
    
    scanf("%d %d",&nr,&nc);
    
  for(r=1; r<=nr; r++){
      for(c=1; c<=nc; c++){
          if(r==1 || r==nr|| c==1 || c==nc){
              printf("%3d",a++);
          }else{
              printf("%3c",'*');
          }
      }
      printf("\n");
  }
    
    
    return 0;
}