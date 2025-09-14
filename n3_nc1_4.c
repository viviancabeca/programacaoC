#include <stdio.h>

int main(){
    unsigned long int numeroGrandePositivo = 4000000000; // número inteiro grande (long int), sem sinal (unsigned)
    unsigned int numeroPositivo = 4000000000; // número inteiro normal (int), mas sem sinal (unsigned)
    long int numeroGrande = 4000000000;
    int numero = 4000000000;

    // o número inserido acima, 4 bilhõs, está acima da capacidade do número inteiro

    printf("Número positivo grande: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %ld\n", numeroGrande);
    printf("Número: %d\n", numero);

    return 0;

}