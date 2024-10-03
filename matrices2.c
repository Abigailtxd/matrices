#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    printf("introduzca el orden de la matriz");
    scanf("%d", &n);
    int matriz[n][n];
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("introduzca el elemento de la fila %d, columna %d", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int acprincipal=0;
    for(i=1;i<=n;i++){
        acprincipal=acprincipal+matriz[i][i];
    }

    int acsecundario=0;
    for(i=1; i<=n; i++){
        for(j=0;j<n;j++){
            acsecundario=acsecundario+matriz[i][n-j];
        }
    }

    if(acsecundario>acprincipal){
        printf("la suma mayor de la diagonal es el de la secundaria, y es: %d", acsecundario);
    }else if(acprincipal>acsecundario){
        printf("la suma mayor de la diagonal es el de la principal, y es: %d", acprincipal);
    }
}