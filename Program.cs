using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_COMERCIANTE {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, i, abaixo, entre, acima;
            double lucro, perlucro, totcompra, totvenda, totlucro;

            Console.Write("Serao digitados dados de quantos produtos? ");
            N = int.Parse(Console.ReadLine());

            String[] nomes = new String[N];
            double[] pcompra = new double[N];
            double[] pvenda = new double[N];

            for (i = 0; i < N; i++) {
                Console.WriteLine("Produto " + (i + 1));
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Preco de compra: ");
                pcompra[i] = double.Parse(Console.ReadLine(), CI);
                Console.Write("Preco de venda: ");
                pvenda[i] = double.Parse(Console.ReadLine(), CI);
            }

            abaixo = 0;
            entre = 0;
            acima = 0;

            for (i = 0; i < N; i++) {
                lucro = pvenda[i] - pcompra[i];
                perlucro = lucro * 100 / pcompra[i];

                if (perlucro < 10) {
                    abaixo = abaixo + 1;
                }
                else if (perlucro <= 20) {
                    entre = entre + 1;
                }
                else {
                    acima = acima + 1;
                }
            }

            totcompra = 0;
            totvenda = 0;

            for (i = 0; i < N; i++) {
                totcompra = totcompra + pcompra[i];
                totvenda = totvenda + pvenda[i];
            }

            totlucro = totvenda - totcompra;

            Console.WriteLine();
            Console.WriteLine("RELATORIO:");
            Console.WriteLine("Lucro abaixo de 10%: " + abaixo);
            Console.WriteLine("Lucro entre 10% e 20%: " + entre);
            Console.WriteLine("Lucro acima de 20%: " + acima);
            Console.WriteLine("Valor total de compra: " + totcompra.ToString("F2", CI));
            Console.WriteLine("Valor total de venda: " + totvenda.ToString("F2", CI));
            Console.WriteLine("Lucro total: " + totlucro.ToString("F2", CI));

        }
    }
}
