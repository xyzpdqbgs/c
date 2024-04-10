/* Escreva um programa em linguagem C que coloque no ecrã 
as tabuadas do 1 ao 10. Pare o ecrã após cada tabuada. 
(Utilize o ciclo for) 

#include <stdio.h>

int main() {
    int num, cont, i;

    printf("Introduza um número de 1 a 10: ");
    scanf("%d", &num);

    if (num < 1 || num > 10) {
        printf("Número inválido. Introduza um número de 1 a 10: ");
        scanf("%d", &num);
    } else {
        for (i = 1; i <= 10; i++) {
            cont = num * i;
            printf("%d x %d = %d\n", num, i, cont);
        }
    }

    return 0;
}

*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        printf("Tabuada do %d:\n", i);

        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

         system("pause");

    }

    return 0;
}

