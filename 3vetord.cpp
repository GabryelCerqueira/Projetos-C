#include <stdio.h>
#define TF 7

int main(void) {
    int i, j, vet1[TF], vet2[TF], vet3[TF * 2], num, TL1 = 0, TL2 = 0, TL3 = 0, pos = 0;

    printf("Digite o %do valor do primeiro vetor:\n", TL1 + 1);
    scanf("%d", &num);
    while (TL1 < TF && num > 0) {
        pos = 0;
        while (pos < TL1 && num > vet1[pos]) {
            pos++;
        }
        for (i = TL1; i > pos; i--) {
            vet1[i] = vet1[i - 1];
        }
        vet1[pos] = num;
        TL1++;
        if (TL1 < TF) {
            printf("\nDigite o %do valor do primeiro vetor:\n", TL1 + 1);
            scanf("%d", &num);
        }
    }

    printf("\nDigite o %do valor do segundo vetor:\n", TL2 + 1);
    scanf("%d", &num);
    while (TL2 < TF && num > 0) {
        pos = 0;
        while (pos < TL2 && num > vet2[pos]) {
            pos++;
        }
        for (i = TL2; i > pos; i--) {
            vet2[i] = vet2[i - 1];
        }
        vet2[pos] = num;
        TL2++;
        if (TL2 < TF) {
            printf("\nDigite o %do valor do segundo vetor:\n", TL2 + 1);
            scanf("%d", &num);
        }
    }

    i = 0;
    j = 0;
    TL3 = 0;

    while (i < TL1 && j < TL2) {
        if (vet1[i] < vet2[j]) {
            vet3[TL3] = vet1[i];
            i++;
        } else {
            vet3[TL3] = vet2[j];
            j++;
        }
        TL3++;
    }

    while (i < TL1) {
        vet3[TL3] = vet1[i];
        i++;
        TL3++;
    }

    while (j < TL2) {
        vet3[TL3] = vet2[j];
        j++;
        TL3++;
    }

    printf("\n\nVetor 3 intercalado e ordenado:\n");
    for (i = 0; i < TL3; i++) {
        printf("%d ", vet3[i]);
    }
    printf("\n");

    return 0;
}

