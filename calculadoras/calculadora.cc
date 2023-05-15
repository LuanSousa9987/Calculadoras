#include <iostream>
using namespace std;

int main() {

  // Declarando as variáveis
  int escolha;
  double num1, num2, resultado;

  // Exibindo as opções disponíveis

  cout << "Selecione a operação:" << endl;
  cout << "1. Adição" << endl;
  cout << "2. Subtração" << endl;
  cout << "3. Multiplicação" << endl;
  cout << "4. Divisão" << endl;

  // Lendo a escolha do usuário

  cout << "Digite a opção (1/2/3/4): ";
  cin >> escolha;

  // Lendo os números de entrada

  cout << "Digite o primeiro número: ";
  cin >> num1;
  cout << "Digite o segundo número: ";
  cin >> num2;

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
      cout << "Opção inválida!" << endl;
      return 0;
  }

  // Exibindo o resultado
  
  cout << "O resultado é: " << resultado << endl;

  return 0;
}
