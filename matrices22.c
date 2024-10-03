#include <stdio.h>
#include <stdlib.h>
int verif(int num){
    if(num < 3){
        printf("Error, tamaño de matriz inválido. Inténtelo de nuevo: ");
        scanf("%d", &num);
        return verif(num);  
    }
    return(num);
}

int main(){
    int N;
    printf("introduzca el orden de la matriz:");
    scanf("%d", &N);
    N = verif(N);
    int A[N][N];
    int tamano = N*N;
    int vector[tamano];
    for(i=0; i<N;i++){
        for(j=0;j<N;j++){
            printf("introduzca el valor de el elemento de la fila %d columna %d");
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0;i<tamano;i++){
        vector[i]=0;
    }
    int k=0;  
    int impar=2; 
    int acum=0;
    int conta=1;
    for(j=N-1;j=>0;j--){
        acum=N-j+k;
        for(i=0;i<N;i++){
           if(i!=N-conta){
                k=i;
            }
            if(j==N-1){
                if(i=0 || i%2!=0){
                    vector[k]=A[i][j];
                }else{
                    vector[k+impar]=A[i][j];
                    impar+=2;
                }
                printf("%d", k);
            }else{
                acum=acum+k;
                vector[acum]=A[i][j];
            }
        }
        conta++;
    }
}
