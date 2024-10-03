#include <stdlib.h>
#include <stdio.h>

int main(){
    int almacenes[6][10];
    int j;
    int i;
    int ventatotal=0;
    for(i=1;i<=6;i++){
        for(j=1;j<=10;j++){
            printf("introduzca la venta del almacén %d en el dpto nro %d", i,j);
            scanf("%d", &almacenes[i][j]);
            ventatotal=ventatotal+almacenes[i][j];
        }
    }
    int totalalmacen=0;
    for(i=1;i<=6;i++){
        for(j=1;j<=10;j++){
            totalalmacen=totalalmacen+almacenes[i][j];
        }
        printf("la venta total del almacen %d es %d", i, totalalmacen);
    }
    int ventadpto=0;
    for(j=1;j<=10;j++){
        for(i=1;i<=6;i++){
            ventadpto=ventadpto+almacenes[i][j];
        }
        printf("la venta total del dpto %d es %d", j, ventadpto);
    }
    printf("la venta total es %d", ventatotal);
    
}