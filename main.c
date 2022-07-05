#include <stdio.h>


int main()
{

       int N, i, abaixo, entre, acima;
       double lucro, perlucro, totcompra, totvenda, totlucro;

       printf("Serao digitados dados de quantos produtos? ");
       scanf("%d", &N);

       char nome[N][80];
       double pcompra[N], pvenda[N];

       for (int i = 0; i < N; i++) {
            printf("Produto %d: \n", i + 1);
            printf("Nome: ");
            scanf("%s", &nome[i][0]);
            printf("Preco de compra: ");
            scanf("%lf", &pcompra[i]);
            printf("Preco de venda: ");
            scanf("%lf", &pvenda[i]);
       }

       abaixo = 0;
       entre = 0;
       acima = 0;

       for (int i = 0; i < N; i++) {
            lucro = pvenda[i] - pcompra[i];
            perlucro = lucro * 100 / pcompra[i];

            if (perlucro < 10) {
                abaixo = abaixo + 1;
            }
            else if (perlucro <= 20) {
                entre = entre + 1;
            }
            else { acima = acima + 1;
            }
       }

       totcompra = 0;
       totvenda = 0;

        for (int i = 0; i < N; i++) {
             totcompra = totcompra + pcompra[i];
             totvenda = totvenda + pvenda[i];
        }

        totlucro = totvenda - totcompra;

        printf("\nRELATORIO: \n");
        printf("Lucro abaixo de 10%%: %d \n", abaixo);
        printf("Lucro entre 10%% e 20%%: %d \n", entre);
        printf("Lucro acima de 20%%: %d \n", acima);
        printf("Valor total de compra: %.2lf \n", totcompra);
        printf("Valor total de venda: %.2lf \n", totvenda);
        printf("Lucro total: %.2lf", totlucro);




    return 0;
}
