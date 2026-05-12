#include<stdio.h>
int main()
{
    char AouB;
    float expA, expB; 
    expA = 2 + 3 - 5 * 8 - 4 + 354 - 521 + 7 * 66;
    expB = 2 + 7 * (14 - 21) + 28 * 3 * 42 + 740 - (156 + 4 + 40) * 9;

    printf("Digite A para expressao 'A' e B para expressao 'B':  \n");
    scanf("%c",&AouB);
    if(AouB == 'A' || AouB == 'a'){
        printf("A expressao 'A' eh: %.2f", expA);
    }else if(AouB == 'B' || AouB == 'b'){
        printf("A expressao 'B' eh: %.2f", expB);
    }else{
        printf("Expressao inexistente");
    }
    
    
}