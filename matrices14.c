#include <stdio.h>
#include <stdlib.h>

int main(){
    int notas[30][5];
    int cero=0;
    for(i=1;i<=30;i++){
        for(j=1;j<=5;j++){
            printf("introduzca la nota del alumno")l
            scanf("%d", &notas[i][j]);
            notas[i][j]=verif(notas[i][j]);
            if(notas[i][j]==0){
                cero++;
            }
            if(notas[i][j]==0 && cero>2){
                while(notas[i][j]==0){
                    printf("error, el alumno debe estar anotado en minimo dos asignaturas");
                    scanf("%d", &notas[i][j]);
                }
            }
        }
    }
    ac=0;
    notas=0;
    for(i=1;i<=30;i++){
        printf("la nota del alumno %d es:", i);
        for(j=1;j<=5;j++){
            if(notas[i][j]!=0){
                printf("materia numero %d");
                ac=ac+notas[i][j];
                notas++;
            }
        }
        printf("su promedio es %d", ac/notas);
    }
}