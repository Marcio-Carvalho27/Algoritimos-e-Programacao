#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;

    printf("Qual foi a nota da primeira prova? \n");
    scanf("%f", &nota1);
    printf("Qual foi a nota da segunda prova? \n");
    scanf("%f", &nota2);
    printf("Qual foi a nota da terceira prova? \n");
    scanf("%f", &nota3);
    printf("Qual foi a nota da terceira prova? \n");
    scanf("%f", &nota4);


    media = (nota1*2 + nota2*3 + nota3*4 + nota4*1) /10;

    if (media >= 7){
        printf(" Voce foi APROVADO");
    }
    else if (media >= 5){
        printf(" Voce foi para o EXAME FINAL");
    }
    else {
        printf(" Voce foi REPROVADO");
    }
       


    return 0;
}