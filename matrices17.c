#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[6][6];
    int primernum;
    int segundonum;
    printf("introduzca el primer número:");
    scanf("%d", &primernum);
    while(primernum>6 || primernum<1){
        printf("error, introduzca un número entre 1 y 6");
        scanf("%d", &primernum);
    }
    printf("introduzca el segundo número:");
    scanf("%d", &segundonum);
    while(segundonum>6 || segundonum<1){
        printf("error, introduzca un número entre 1 y 6");
        scanf("%d", &primernum);
    }
    int i;
    int j;
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(i==primernum){
                mat[i][j]=0;
            }
        
            if(j==segundonum){
                mat[i][j]=0;
            }
            else{
                mat[i][j]=1;
            }
        }
    }
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}