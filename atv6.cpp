#include <stdio.h>

int main(){

    int total, cem, cinq, vint, dez, cinc, dois, um;

    scanf("%d", &total);

    cem = total / 100;
    cinq = (total-cem*100) / 50;
    vint = (total-cem*100-cinq*50) / 20;
    dez = (total-cem*100-cinq*50-vint*20) / 10;
    cinc = (total-cem*100-cinq*50-vint*20-dez*10) / 5;
    dois = (total-cem*100-cinq*50-vint*20-dez*10-cinc*5) / 2;
    um = (total-cem*100-cinq*50-vint*20-dez*10-cinc*5-dois*2) / 1;

    printf("%d \n", total);
    printf("%d notas de RS 100 \n", cem);
    printf("%d notas de RS 50 \n", cinq);
    printf("%d notas de RS 20 \n", vint);
    printf("%d notas de RS 10 \n", dez);
    printf("%d notas de RS 5 \n", cinc);
    printf("%d notas de RS 2 \n", dois);
    printf("%d notas de RS 1 \n", um);

    return 0;
}

