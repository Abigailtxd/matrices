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
    int L;
    printf("introduzca el orden de la matriz");
    scanf("%d", &L);
    L = verif(L);
    int A[L][L];
    int i,j;
    printf("hola");
    for(i=1;i<=L;i++){
        for(j=1;j<=L;j++){
            printf("introduzca el elemento e la fila %d, columna %d", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    
    int mayor= A[1][1];
    
    int aux;
    for(i=1; i<=L; i++){
        for(j=1; j<=L; j++){
           if(mayor<A[i][j]){
                aux=mayor;
                mayor=A[i][j];
                A[i][j]=aux;
           }
        }
        j=j+i;
    }
    printf("el mayor elemento del triangulo superior es: %d", mayor);

}