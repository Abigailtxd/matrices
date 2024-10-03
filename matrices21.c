
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verif(int num){
    if(num < 3){
        printf("Error, tamaño de matriz inválido. Inténtelo de nuevo: ");
        scanf("%d", &num);
        return verif(num);  
    }
    return(num);
}

int main(){
    srand(time(NULL));  
    int M, N;
    printf("Introduzca la cantidad de filas del laberinto: ");
    scanf("%d", &M);
    M = verif(M);

    printf("Introduzca la cantidad de columnas de la matriz: ");
    scanf("%d", &N);
    N = verif(N);

    int LABERINTO[M][N];

  
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            LABERINTO[i][j] = 1;
        }
    }

    LABERINTO[0][0] = 0;

    int posinicial, posfinal, ultimaposicion = 0;

    
    for(int i = 1; i < M - 1; i++){
        posinicial = rand() % N;
        if(i == 1){
            posinicial = 0;  
        }

      
        while(ultimaposicion > posinicial){
            posinicial = rand() % N;
        }

        posfinal = rand() % N;  
        while(posfinal < posinicial) {
            posfinal = rand()%N;
        }

        for( j = posinicial; j <= posfinal && j < N; j++){
            LABERINTO[i][j] = 0; 
        }

        ultimaposicion = posfinal;  
    }

 
    for( j = ultimaposicion; j < N; j++){
        LABERINTO[M-1][j] = 0;
    }


    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf(" %d", LABERINTO[i][j]);
        }
        printf("\n");
    }

    return 0;
}


