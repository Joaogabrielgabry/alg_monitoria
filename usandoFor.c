#include<stdio.h>
int main()
{
    int i, AnoNascimento, AnoAtual, idade;
    for (i = 0; i < 30; i++){
        printf("*");
    }
    printf("\ndigite seu ano de nascimento: ");
    scanf("%d",&AnoNascimento);
    
    printf("\ndigite o ano atual: ");
    scanf("%d",&AnoAtual);
     for(i = 0 ; i< 30 ; i++){
        printf("*");
     }
     idade = AnoAtual - AnoNascimento;
     printf("\nidade calculada: %d ",idade);
     return 0;   
}