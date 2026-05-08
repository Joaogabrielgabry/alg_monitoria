#include <stdio.h>
int main()
{
    int age;
    printf("digite a sua idade: ");
    printf("sua idade: ");
    scanf("%d",&age);
    if(age < 16 && age >= 0){
        printf("idade proibida para votar");
    }if(age >= 16 && age < 18){
        printf("voto facultativo");
    }if(age >= 18 && age < 70){
       printf("voto obrigatorio"); 
    }if(age >= 70 && age <= 120){
        printf("voto facultativo");
    }if(age < 0 || age > 120){
        printf("idade invalida");
    }
    return 0;
}