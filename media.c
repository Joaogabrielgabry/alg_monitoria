#include<stdio.h>
int main()
{
  float nota1, nota2, media;
  printf("digite duas notas do aluno: ");
  printf("\nnota 1 : ");
  scanf("%f",&nota1);
  printf("nota 2 : ");
  scanf("%f",&nota2);
  media = (nota1 + nota2) / 2; 
  if(media <= 7){
    printf("aluno reprovado");
  }else{
    printf("aluno aprovado");
  }
  return 0;
}