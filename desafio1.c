#include<stdio.h>
int main()
{   
    float nota1, nota2, media;
    char aluno[30];
    printf("digite o nome do aluno e duas notas: \n");
    printf("nome do aluno: ");
    scanf("%s",&aluno);
    printf("nota 1: ");
    scanf("%f",&nota1);
    printf("nota 2: ");
    scanf("%f",&nota2);
    media = (nota1 + nota2) /2 ;
    printf("nome do aluno: %s, nota1: %.2f, nota2: %.2f, media final: %.2f",aluno, nota1, nota2, media);
    return 0;
}
