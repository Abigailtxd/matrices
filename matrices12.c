#include <stdio.h>
#include <stdlib.h>
int verif(num){
    if(num<0){
        printf("posición invalida");
        scanf("%d", &num);
        return(verif(num));
    }
    return(num);
}


int main(){
    int posibilidadescolumna[8];
    int posibilidadesfila[8];
    int poscolumna;
    int posfilas;
    printf("introduzca la posicion en fila del caballo ");
    scanf("%d", &posfilas);
    posfilas=verif(posfilas);
    printf("introduzca la posición en columa del caballo");
    scanf("%d", &poscolumna);
    poscolumna = verif(poscolumna);
    int k;
    int i;
    int place=0;
    for(k=-2;k<=2;k+=4){
        for(i=-1;i<=1;i+=2){
            posibilidadesfila[place++]=posfilas+k;
            posibilidadescolumna[place++]=poscolumna+i;
        }
    }
    for(k=-2;k<=2;k+=4){
        for(i=-1;i<=1;i+=2){
            posibilidadescolumna[place++]=poscolumna+k;
            posibilidadesfila[place++]=posfilas+i;
        }
    }
    for(i=0;i<8;i++){
        printf("entro");
        if(posibilidadescolumna[i]!=0 && posibilidadesfila[i]!=0){
            printf("el caballito puede moverse a la fila %d columna %d", posibilidadesfila[i], posibilidadescolumna[i]);
        }
    }
}