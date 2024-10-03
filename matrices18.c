#include <stdlib.h>
#include <stdio.h>
/*ordenar la matriz con el ejemplo siguiente*/
int verif(int num){
    while(num<=0){
        printf("error, el numero debe ser mayor que 0");
        scanf("%d", &num);
    }
    return num;
}

int main(void){
    int m;
    int n;
    printf("introduzca las filas de una matriz");
    scanf(" %d", &m);
    m = verif(m);
    printf("introduzca las columnas de una matriz");
    scanf(" %d", &n);
    n = verif(n);
    int mat[m][n];
    int i;
    int j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("introduzca el elemento de la fila %d columna %d", i,j);
            scanf("%d", &(mat[i][j]));
        }
    }
    int k=0;
    int array[m * n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            array[k++] = mat[i][j];
        }
    }
    printf("array original:");
    for(i=0;i<m*n;i++){
        printf("%d",array[i]);
    }

    int temp;
    for(i=0;i<m*n;i++){
            if(array[i]>array[i+1]){
                temp = array[i];
                array[i]= array[i+1];
                array[i+1]=temp;
            }
    }
    printf("array ordenado:");
    for(i=0;i<m*n;i++){
        printf("%d ",array[i]);
    }

    for(i=0; i<m;i++){
        for(j=0;j<n;j++){
            mat[i][j]=array[k++];
        }
    }

    for(i=0;j<m;j++){
        for(i=0;j<n;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    

    
}