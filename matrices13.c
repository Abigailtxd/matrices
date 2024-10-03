#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int verif(num){
    while(num<=0){
        printf("error, introduzca otro valor");
        scanf("%d", &num);
        return(verif);
    }
    return(num);
}

int main(){
    int m; 
    int n;
    printf("introduzca la cantidad de filas de la matriz");
    scanf("%d", &m);
    m = verif(m);
    printf("introduzca la cantidad de columnas de la matriz");
    scanf("%d", &n);
    n = verif(n);
    int mat[m][n];
    int nros[n];
    int i;
    int j;
    for(i=0; i<n; i++){
        nros[i]=i+1;
    }

    for(i=1;i<=n;i++){
        mat[1][i]=nros[i];
    }
    int temp;
    for(i=2;i<=m;i++){
        for(i=0;i<n; i++){
            temp=nros[n-i];
            nros[n-i]=nros[n-(i+1)];
            nros[n-(i+1)]=temp;
        }
        for(j=1;j<=n;j++){
            mat[i][j]=nros[i];
        }
    }

    
    for(i=1;i<=m;i++){
        for(j=1;j<+n;j++){
            printf("%d", mat[i][j]);
        }
    }
    
    
}