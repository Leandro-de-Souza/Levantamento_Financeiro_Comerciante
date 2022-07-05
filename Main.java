import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, abaixo, entre, acima;
	    double lucro, perlucro, totcompra, totvenda, totlucro;
	    
	    System.out.print("Serao digitados dados de quantos produtos? ");
	    N = sc.nextInt();
	    
	    String[] nomes = new String[N];
	    double[] pcompra = new double[N];
	    double[] pvenda = new double[N];
	    
	    for (int i = 0; i < N; i++) {
	    	System.out.println("Produto " + (i + 1) + ":");
	    	sc.nextLine();
	    	System.out.print("Nome: ");
	    	nomes[i] = sc.nextLine();
	    	System.out.print("Preco de compra: ");
	    	pcompra[i] = sc.nextDouble();
	    	System.out.print("Preco de venda: ");
	    	pvenda[i] = sc.nextDouble();	
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

	        System.out.println();
	        System.out.println("RELATORIO:");
	        System.out.println("Lucro abaixo de 10%: " + abaixo);
	        System.out.println("Lucro entre 10% e 20%: " + entre);
	        System.out.println("Lucro acima de 20%: " + acima);
	        System.out.println("Valor total de compra: " + String.format("%.2f", totcompra));
	        System.out.println("Valor total de venda: " + String.format("%.2f", totvenda));
	        System.out.println("Lucro total: " + String.format("%.2f", totlucro));
	        
	        sc.close(); 
	}

}
