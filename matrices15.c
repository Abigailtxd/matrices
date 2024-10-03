#include <stdio.h>
#include <stdlib.h>

int main(){
   int array[12];
   int matriz[4][3];
   int i;
   int j;
   int k;
   for(k=0;k<12;k++){
        printf("introduzca el elemento %d del vector", k);
        scanf("%d", &array[k]);
   }
   k=0;
   for(i=0; i<4;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=array[k++];
        }
     }
     for(i=1;i<=4;i++){
          for{j=1;j<=3;j++}{
               printf("%d", array[i][j]);
          }
          printf("\n");
     }
   
}