#include <stdio.h>

int main() {

    float distancia, consumoMedio, precoCombustivel, custoViagem;

    printf("distância da viagem em km: ");
    scanf("%f", &distancia);

    printf("consumo médio do veículo em l/km: ");
    scanf("%f", &consumoMedio);

    printf("digite o preço do litro de combustível: ");
    scanf("%f", &precoCombustivel);

    custoViagem = (distancia / consumoMedio) * precoCombustivel;

    printf("O custo estimado da viagem é: € %.2f\n", custoViagem);

    return 0;
}
