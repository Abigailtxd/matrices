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
    int i;
    int j;
    int Q[m][n];
    int mayor=-500;
    int aux;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("introduzca el elemento de la fila %d, columna %d de la matriz Q", i,j);
            scanf("%d", &Q[i][j]);
        }
    }
    int acmin=0;
    int acmax=0;
    int min=Q[1][1];
    int max=Q[1][1];
    int temp;
    for(j=1;j<=n;j++){
        for(i=1;j<+m;i++){
            if(Q[i][j]>max){
                temp=Q[i][j];
                Q[i][j]=max;
                max=aux;
            }
            if(Q[i][j]<min){
                temp=Q[i][j];
                Q[i][j]=min;
                min=aux;
            }
        }
        acmin=acmin+min;
        acmax=acmax+max;
    }
    printf("la solución minimax es: %d", acmin/acmax);
}