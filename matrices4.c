#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    printf("introduzca el orden de la matriz");
    scanf("%d", &n);
    int matriz[n][n];
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("introduzca el elemento de la fila %d, columna %d", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int ac=0;
    for(i=1;i<=n;i++){
        ac=ac+matriz[i][i];
    }
    printf("la suma de la diagonal principal es: %d", ac);
}