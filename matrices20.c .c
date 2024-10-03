#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9, 10,11,12},
                   {13,14,15,0},
                   };
    int i;
    int j;
    int fila;
    int columna;
    int temp
    srand(time(null));
    for(i=0;i<15;i++){+
        fila = rand%(3);
        columna = rand%(3);
        temp=mat[3][3];
        mat[3][3]=mat[fila][columna];
        mat[fila][columna]=temp;
    }
    char decision = "s";
    printf("bienvenidos al juego del rompecabezas");
    for(i=0;i<4;i++){
        printf("|");
        for(j=0;j<4;j++){
            printf("%d", mat[i][j]);
        }
        printf("|");
        printf("\n");
    }
    int filanueva;
    int columnanueva;
    while(decision=="s"){
        printf("introduzca a que fila quiere mover el 0:");
        scanf("%d", &filanueva);
        filanueva=verif(filanueva);
        printf("introduzca la columna a la que quiere mover el 0:");
        scanf("%d", &columnanueva);
        columnanueva = verif(columnanueva);
        temp=mat[fila][columna];
        mat[fila][columna]=mat[filanueva][columnanueva];
        mat[filanueva][columnanueva]=temp;
        printf("el puzzle:");
        for(i=0;i<4;i++){
        printf("|");
        for(j=0;j<4;j++){
            printf("%d", mat[i][j]);
        }
        printf("|");
        printf("\n");
        printf("desea continuar? s/n");
        scanf("%d", &decision);
    }
    }
    

  
    
    
    
    
}