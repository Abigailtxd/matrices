#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz [5][4];
    int i; 
    int j;
    int ac=0;
    for(i=1; i<=5; i++){
        for(j=1; j<=4; j++){
            printf("introduzca el elemento de la fila %d, columna %d", i, j);
            scanf("%d", &matriz[i][j]);
            ac= ac+matriz[i][j];
        }
    }
    printf("el promedio de elementos de la matriz es %d", ac/(5*4));
}