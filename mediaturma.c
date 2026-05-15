#include <stdio.h> 

void main(){

    int num_alunos, cont_aprov = 0, cont_reprov = 0, cont_rec = 0, invalid = 0;
    float media, nota, soma = 0;

    printf("\nDigite a quantidade de alunos: ");
    scanf("%d", &num_alunos);

    for(int i = 1; i<=num_alunos; i++){
        printf("\nDigite o aluno %d: ", i);
        scanf("%f", &nota);
        soma+=nota;
        if(nota >= 7 && nota <= 10){
            cont_aprov++;
        }else if(nota >=5 && nota <7){
            cont_rec++;
        }else if(nota <5 && nota >=0){
            cont_reprov++;
        }else if(nota < 0 || nota > 10){
            printf("nota invalida");
            invalid++;
        }
    }
    media = soma/num_alunos;
    if(invalid == 0){
        printf("\nTemos: %d aprovados, %d de recuperacao e %d reprovados", cont_aprov,cont_rec, cont_reprov);
        printf("\nMedia: %.2f", media);
    }
}