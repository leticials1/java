/* Leticia Siqueira - 0050012430 */

import java.io.IOException;
import java.util.Scanner;

class TabuadaLeticia
{
    public static void main(String[] args) throws IOException 
    {
        int entrada;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe o numero: ");
        entrada = scanner.nextInt();

        int soma = 0;
        while (soma <= 10)
        {
            int resultado = entrada + soma;
            System.out.println(resultado);
            soma ++;  
        
        }
    } 
    
    }