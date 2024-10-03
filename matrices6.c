#include <stdlib.h>
#include <stdio.h>
int verif(num){
    while(num<=0){
        printf("introduzca el numero de vuelta, valor no aceptado");
        scanf("%d", &num);
    }
    return(num);
}

int main(){
    int m;
    int n;
    printf("introduzca el nro de filas de la matriz Q");
    scanf("%d", &m);
    printf("introduzca el nro de filas de la matriz Q");
    scanf("%d", &n);
    m=verif(m);
    n=verif(n);
    int Q[m][n];
    int P[n][m];
    int i;
    int j;
    int k;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("introduzca el elemento de la fila %d, columna %d de la matriz Q", i,j);
            scanf("%d", &Q[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("introduzca el elemento de la fila %d, columna %d P", i,j);
            scanf("%d", &P[i][j]);
        }
    }
    int PRODUCTO[m][m];
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            PRODUCTO[i][j]=0;
            for(k=0;k<m;k++){
                PRODUCTO[i][j]= PRODUCTO[i][j]+Q[i][k]*P[k][j];
            }
        }
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            printf("el elemento de la fila %d, columna %d es", i,j);
            printf("%d", PRODUCTO[i][j]);
        }
    }
}