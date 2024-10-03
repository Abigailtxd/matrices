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
    int n;
    printf("introduzca el orden de la matriz");
    scanf("%d", &n);
    n=verif(n);
    int MAT[n][n];
    int i, j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("introduzca el elemento de la fila %d, %d", i,j);
            scanf("%d", &MAT[i][j]);
        }
    }
    int aux;
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            aux=MAT[i][i];
            MAT[i][i]=MAT[i][n-j];
            MAT[i][n-j]=aux;
        }
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ", MAT[i][j]);
        }
        printf("\n");
    }
}