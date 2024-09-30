#include <stdio.h>
int main() {
    float numero1, numero2, numero3;
    printf("Inserisci i 3 numeri: \n");
    printf("inserisci primo numero: ");
    scanf("%d", &numero1);
    printf("Inserisci secondo numero: ");
    scanf("%d", &numero2);
    printf("Inserisci terzo numero: ");
    scanf("%d", &numero3);
    if(numero1>numero2)
        if(numero1>numero3)
            printf("il primo numero e' maggiore\n");
    if(numero2>numero3)
        printf("il secondo numero e' maggiore");
    if(numero3>numero2)
        if(numero3>numero1)
            printf("il terzo numero e' maggiore");
}