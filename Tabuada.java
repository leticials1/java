/* Leticia Siqueira - 0050012430 */

import java.io.IOException;
import java.util.Scanner;

class Tabuada 
{
    public static void main(String[] args) throws IOException 
    {
        int entrada;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe o numero: ");
        entrada = scanner.nextInt();

        int multiplicador = 0;
        while(multiplicador <= 10)
        {
            int resultado = entrada * multiplicador;
            System.out.println(resultado);   
            multiplicador++;
        }
    }
}
