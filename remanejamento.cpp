#include <stdio.h>
#define TF 8

int main(void) {
    int i, j, vet[TF], TL = 0, num, pos;

    printf("Digite o %d. num:\n", TL + 1);
    scanf("%d", &num);

    while (TL < TF && num > 0) {
        pos = 0;
        
        while (pos < TL && num > vet[pos]) {
            pos++;
        }

        for (i = TL; i > pos; i--) {
            vet[i] = vet[i - 1];
        }

        vet[pos] = num;
        TL++;

        if (TL < TF) {
            printf("Digite o %d. num:\n", TL + 1);
            scanf("%d", &num);
        }
    }

    printf("\nVetor ordenado: ");
    for (i = 0; i < TL; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}

