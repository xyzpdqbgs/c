/*
Dados os 3 valores A, B, C, verificar se eles podem ser os comprimentos dos lados de um triângulo e, 
se forem, verificar se compõem um triângulo equilátero, isósceles ou escaleno.
Informar se não compuseram nenhum triângulo.
Triângulo: figura geométrica de 3 lados, onde cada um é menor do que a soma dos outros dois.
Triângulo equilátero: Triângulo com 3 lados iguais.
Triângulo isósceles: Triângulo com 2 lados iguais.
Triângulo escaleno: Triângulo com todos os lados diferentes.
*/

#include <stdio.h>

int main() {
    // Variáveis
    float lado1, lado2, lado3;

    // Entrada dos comprimentos dos lados
    printf("Introduza o comprimento do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Introduza o comprimento do segundo lado: ");
    scanf("%f", &lado2);
    printf("Introduza o comprimento do terceiro lado: ");
    scanf("%f", &lado3);

    // Verificar se é possível formar um triângulo
    if ((lado1 + lado2 < lado3) && (lado1 + lado3 < lado2) && (lado2 + lado3 < lado1)) {
        // Triângulo é possível

        // Verificar o tipo de triângulo
        // se lado1 = lado2 e lado 2 = lado3
        if (lado1 == lado2 && lado2 == lado3) {
            printf("É um triângulo equilátero.\n");
        // se 1 dos lados = a pelo menos outro lado = isósceles
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        // Triângulo não é possível
        printf("Não é possível formar um triângulo com esses comprimentos de lado.\n");
    }

    return 0;
}
