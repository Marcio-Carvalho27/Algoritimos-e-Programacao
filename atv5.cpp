#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Qual foi a nota da primeira prova? \n");
    scanf("%f", &nota1);
    printf("Qual foi a nota da segunda prova? \n");
    scanf("%f", &nota2);
    printf("Qual foi a nota da terceira prova? \n");
    scanf("%f", &nota3);

    media = (nota1*3 + nota2*3 + nota3*4)/10;

    printf(" Sua media final foi de %.2f", media);


    return 0;
}