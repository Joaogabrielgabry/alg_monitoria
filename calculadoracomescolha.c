#include<stdio.h>
int main()
{
    float num1, num2, resultado;
    int oper = 1;
    while(oper != 0){
        printf("\nEscolha a operacao que deseja realizar");
        printf("\n1 - Soma");
        printf("\n2 - Subtracao");
        printf("\n3 - Multiplicacao");
        printf("\n4 - Divisao");
        printf("\n0 - Sair");
        printf("\nEscolha: ");
        scanf("%d", &oper);
        if(oper == 0){
            printf("\nObrigado! Volte sempre!");
        }
        if(oper == 1){
            printf("Digite o primeiro numero:");
            scanf("%f", &num1);
            printf("Digite o segundo numero:");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("O resultado eh: %.2f", resultado);
        }
        if(oper == 2){
            printf("Digite o primeiro numero:");
            scanf("%f", &num1);
            printf("Digite o segundo numero:");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("O resultado eh: %.2f", resultado);
        }
        if(oper == 3){
            printf("Digite o primeiro numero:");
            scanf("%f", &num1);
            printf("Digite o segundo numero:");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("O resultado eh: %.2f", resultado);
        }
        if(oper == 4){
            printf("Digite o primeiro numero:");
            scanf("%f", &num1);
            printf("Digite o segundo numero:");
            scanf("%f", &num2);
            if(num2 == 0){
                printf("num2 não pode ser zero!!!!");
            }
            if(num2!= 0){
                resultado = num1 / num2;
                printf("O resultado eh: %.2f", resultado);
            }

        }
        if(oper < 0 || oper > 4){
            printf("LERDAO");
        }
    }
}