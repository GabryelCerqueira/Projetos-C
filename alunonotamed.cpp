#include <stdio.h>

#define TF 10

int main(void) {
    float nota1[TF], nota2[TF], nota;
    float mediasIndividuais[TF];
    float somaMedias = 0.0, mediaTurma = 0.0;
    int TL = 0;
    int aprovados = 0, reprovados = 0, abaixoMediaGeral = 0;

    printf("Insira a primeira nota do %d o aluno (ou nota fora de 0-10 para encerrar):\n", TL + 1);
    scanf("%f", &nota);

    while (TL < TF && nota >= 0 && nota <= 10) {
        nota1[TL] = nota;

        printf("Segunda nota do %d o aluno:\n", TL + 1);
        scanf("%f", &nota2[TL]);

        mediasIndividuais[TL] = (nota1[TL] + nota2[TL]) / 2.0;
        somaMedias += mediasIndividuais[TL];

        if (mediasIndividuais[TL] >= 7.0) {
            aprovados++;
        } else {
            reprovados++;
        }

        TL++;

        if (TL < TF) {
            printf("\nInsira a primeira nota do %d o aluno (ou nota fora de 0-10 para encerrar):\n", TL + 1);
            scanf("%f", &nota);
        }
    }
    if (TL == 0) {
        printf("\nNenhum aluno foi cadastrado.\n");
    } else {
        mediaTurma = somaMedias / TL;

        for (int i = 0; i < TL; i++) {
            if (mediasIndividuais[i] < mediaTurma) {
                abaixoMediaGeral++;
            }
        }

        printf("\n--- RESULTADOS ---\n");
        printf("Quantidade de alunos cadastrados: %d\n", TL);
        printf("Media da Turma: %.2f\n", mediaTurma);
        printf("Alunos com media menor que a media geral: %d\n", abaixoMediaGeral);
        printf("Alunos aprovados (media >= 7.0): %d\n", aprovados);
        printf("Alunos reprovados (media < 7.0): %d\n", reprovados);
    }

    return 0;
}

