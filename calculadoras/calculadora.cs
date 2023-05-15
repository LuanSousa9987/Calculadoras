using System;

class Program {
  static void Main() {
    // Declarando as variáveis
    int escolha;
    double num1, num2, resultado;

    // Exibindo as opções disponíveis
    Console.WriteLine("Selecione a operação:");
    Console.WriteLine("1. Adição");
    Console.WriteLine("2. Subtração");
    Console.WriteLine("3. Multiplicação");
    Console.WriteLine("4. Divisão");

    // Lendo a escolha do usuário
    Console.Write("Digite a opção (1/2/3/4): ");
    escolha = Convert.ToInt32(Console.ReadLine());

    // Lendo os números de entrada
    Console.Write("Digite o primeiro número: ");
    num1 = Convert.ToDouble(Console.ReadLine());
    Console.Write("Digite o segundo número: ");
    num2 = Convert.ToDouble(Console.ReadLine());

    // Realizando a operação escolhida
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
        Console.WriteLine("Opção inválida!");
        return;
    }

    // Exibindo o resultado
    Console.WriteLine("O resultado é: {0}", resultado);
  }
}
