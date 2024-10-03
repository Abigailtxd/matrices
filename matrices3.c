#include <stdlib.h>
#include <stdio.h>

int main(){
    int m;
    int n;
    printf("introduzca el número de filas deseadas:\n");
    scanf("%d", &m);
    printf("introduzca el número de columnas deseadas:\n");
    scanf("%d", &n);
    int matriz [m][n];
    int i;
    int j;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            printf("introduzca el elemento de la fila %d, columna %d", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int igual=0;
    int filasiguales=0;
    for(i=1; i<=m; i++){
        int igual=0;
        for(j=1; j<=n; j++){
            if(matriz[i][j]==matriz[i+1][j]){
                igual++;
            }
        }

        if(igual==n){
            filasiguales++;
        }
    }
    printf("la cantidad de filas iguales es:%d\n", filasiguales);
}