#include <stdlib.h>
#include <stdio.h>

int verif(num){
    if(num<1){
        printf("por favor, pruebe otro valor");
        scanf("%d", &num);
        return(verif(num));
    }
    return(num);
}


int main(){
    int fila;
    int columna;
    printf("introduzca el nro de filas de la matriz");
    scanf("%d",&fila);
    fila = verif(fila);
    printf("introduzca le nro de columnas de la matriz");
    scanf("%d", &columna);
    fila = verif(fila);
    int p=1;
    int finfila=fila-2;
    int fincolumna=columna-2;
    int q=2;
    int mat [fila][columna];
    int i;
    int j;
    for(i=0;i<fila;i++){
        for(j=0;j<columna;j++){
            printf("introduzca el elemento de la matriz %d columna %d", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    int suma;
    for(i=p;i<finfila;i++){
        for(j=q;j<fincolumna;j++){
            if(i==p || j==q || i==finfila || j==fincolumna){
                suma=suma+mat[i][j];
            }

        }
    }
    printf("la suma será de ");

}