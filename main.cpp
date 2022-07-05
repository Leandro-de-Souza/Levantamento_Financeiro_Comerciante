#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{

       int N, i, abaixo, entre, acima;
       double lucro, perlucro, totcompra, totvenda, totlucro;

       cout << "Serao digitados dados de quantos produtos? ";
       cin >> N;

       string nomes[N];
       double pcompra[N], pvenda[N];

       for (int i = 0; i < N; i++) {
            cout << "Produto " << i + 1 << endl;
            cin.ignore(INT_MAX, '\n');
            cout << "Nome: ";
            getline(cin, nomes[i]);
            cout << "Preco de compra: ";
            cin >> pcompra[i];
            cout << "Preco de venda: ";
            cin >> pvenda[i];
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

        cout << endl << "RELATORIO:" << endl;
        cout << "Lucro abaixo de 10%: " << abaixo << endl;
        cout << "Lucro entre 10% e 20%: " << entre << endl;
        cout << "Lucro acima de 20%: " << acima << endl;
        cout << fixed << setprecision(2);
        cout << "Valor total de compra: " << totcompra << endl;
        cout << "Valor total de venda: " << totvenda << endl;
        cout << "Lucro total: " << totlucro << endl;


    return 0;
}
