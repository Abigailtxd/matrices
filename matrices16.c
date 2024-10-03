#include <stdio.h>
#include <stdlib.h>
/*ingresar una matriz de 5*3 y crear una nueva matriz que sea la traspuesta de la primera y luego imprimirla*/
int main(){
    int matriz[5][3];
    int traspuesta[3][5];
    int i, j;
    for(i=1;i<=5;i++){
        for(j=1;j<=3;j++){
            printf("introduzca el elemento de la fila %d columna %d:", i,j);
            scanf("%d", &matriz[5][3]);


        }
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=3;j++){
            traspuesta[j][i]=matriz[i][j];
        }
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=3;j++){
            printf("%d ", traspuesta[i][j]);
        }
        printf("\n");
    }
}