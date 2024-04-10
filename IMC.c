#include <stdio.h>

int main(){
    
    char nome[50]; //string
    int idade;
    float peso, altura, imc;

    printf("O seu nome: ");
    scanf("%s", &nome);

    printf("A sua idade: ");
    scanf("%i", &idade);

    printf("O seu peso: ");
    scanf("%f", &peso);

    printf("A sua altura: ");
    scanf("%f", &altura);

    imc=(peso/(altura*altura));

    printf("O meu nome é %s, tenho %i anos, peso %.2f kg e meço %.1f m. O meu IMC é %.1f\n", nome, idade, peso, altura, imc);

    return 0;
}