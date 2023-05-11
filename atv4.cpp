#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, delta, x, x1;

    printf(" Qual e o valor de A? \n");
    scanf("%d", &A);
    printf(" Qual e o valor de B? \n");
    scanf("%d", &B);
    printf(" Qual e o valor de C? \n");
    scanf("%d", &C);

    delta = B*B - 4*A*C;

    x = (-B + sqrt(delta))/2*A;
    x1 = (-B - sqrt(delta))/2*A;

    printf(" X = %d \n X' = %d", x, x1);
    
    return 0;
}