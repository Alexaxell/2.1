#include <stdio.h>

int main(void) {
    float numero1, numero2, media;
    printf("inserisci il primo numero:");
    scanf("%f", &numero1);
    printf("inserisci il secondo numero:");
    scanf("%f", &numero2);
    media = (numero1 + numero2) / 2;
    printf("la media dei due numeri è: %f", media);
    return 0;
}
