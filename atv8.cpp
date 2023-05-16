#include <stdio.h>

int main()
{
    float x, y;

    printf("Qual e o valor de X \n");
    scanf("%f", &x);
    printf("Qual e o valor de Y \n");
    scanf("%f", &y);

    if (x>0 && y>0){
        printf("Esta no Primeiro Quadrante \n");
    }
    else if (x<0 && y>0){
        printf("Esta no Segundo Quadrante \n");
    }
    else if (x<0 && y<0){
        printf("Esta no Terceiro Quadrante \n");
    }
    else if (x>0 && y<0){
        printf("Esta no Quarto Quadrante \n");
    }
    
    return 0;
}