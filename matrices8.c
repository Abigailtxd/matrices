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
    int N;
    printf("introduzca el orden de la matriz");
    scanf("%d", &N);
    N = verif(N);
    int M[N][N];
    int i;
    int j;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            printf("introduzca el elemento de la fila %d, columna %d de la matriz Q", i,j);
            scanf("%d", &M[i][j]);
        }
    }
    int aux;
    for(j=1;j<=N-1;j++){
        aux=M[1][j];
        M[1][j]=M[j+1][3];
        M[j+1][3]=aux;
    }
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
}