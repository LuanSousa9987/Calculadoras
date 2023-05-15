import java.util.Scanner;

public class Calculadora {
  public static void main(String[] args) {

    // Criando um objeto Scanner para ler a entrada do usuário

    Scanner input = new Scanner(System.in);

    // Exibindo as opções disponíveis

    System.out.println("Selecione a operação:");
    System.out.println("1. Adição");
    System.out.println("2. Subtração");
    System.out.println("3. Multiplicação");
    System.out.println("4. Divisão");

    // Lendo a escolha do usuário

    System.out.print("Digite a opção (1/2/3/4): ");
    int escolha = input.nextInt();

    // Lendo os números de entrada

    System.out.print("Digite o primeiro número: ");
    double num1 = input.nextDouble();
    System.out.print("Digite o segundo número: ");
    double num2 = input.nextDouble();

    // Realizando a operação escolhida

    double resultado;
    switch (escolha) {
      case 1:
        resultado = num1 + num2;
        break;
      case 2:
        resultado = num1 - num2;
        break;
      case 3:
        resultado = num1 * num2;
        break;
      case 4:
        resultado = num1 / num2;
        break;
      default:
        System.out.println("Opção inválida!");
        return;
    }

    // Exibindo o resultado
    
    System.out.println("O resultado é: " + resultado);
  }
}

