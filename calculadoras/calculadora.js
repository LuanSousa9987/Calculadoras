// Definindo a função da calculadora

function calculadora() {

    // Exibindo as opções disponíveis

    console.log("Selecione a operação:");
    console.log("1. Adição");
    console.log("2. Subtração");
    console.log("3. Multiplicação");
    console.log("4. Divisão");
  
    // Lendo a escolha do usuário

    var escolha = prompt("Digite a opção (1/2/3/4):");
  
    // Lendo os números de entrada

    var num1 = parseFloat(prompt("Digite o primeiro número:"));
    var num2 = parseFloat(prompt("Digite o segundo número:"));
  
    // Realizando a operação escolhida

    var resultado;
    switch (escolha) {
      case '1':
        resultado = num1 + num2;
        break;
      case '2':
        resultado = num1 - num2;
        break;
      case '3':
        resultado = num1 * num2;
        break;
      case '4':
        resultado = num1 / num2;
        break;
      default:
        console.log("Opção inválida!");
        return;
    }
  
    // Exibindo o resultado
    
    console.log("O resultado é:", resultado);
  }
  
  // Chamando a função da calculadora
  calculadora();
  