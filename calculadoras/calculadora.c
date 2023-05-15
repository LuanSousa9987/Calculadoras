#include <stdio.h>

int main() {

  // Declarando as variáveis
  int escolha;
  double num1, num2, resultado;

  // Exibindo as opções disponíveis

  printf("Selecione a operação:\n");
  printf("1. Adição\n");
  printf("2. Subtração\n");
  printf("3. Multiplicação\n");
  printf("4. Divisão\n");

  // Lendo a escolha do usuário
  
  printf("Digite a opção (1/2/3/4): ");
  scanf("%d", &escolha);

  // Lendo os números de entrada

  printf("Digite o primeiro número: ");
  scanf("%lf", &num1);
  printf("Digite o segundo número: ");
  scanf("%lf", &num2);

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
      printf("Opção inválida!\n");
      return 0;
  }

  // Exibindo o resultado
  
  printf("O resultado é: %lf\n", resultado);

  return 0;
}
