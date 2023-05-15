# Definindo a função da calculadora

def calculadora():

  # Exibindo as opções disponíveis

  print("Selecione a operação:")
  print("1. Adição")
  print("2. Subtração")
  print("3. Multiplicação")
  print("4. Divisão")

  # Lendo a escolha do usuário

  escolha = input("Digite a opção (1/2/3/4): ")

  # Lendo os números de entrada

  num1 = float(input("Digite o primeiro número: "))
  num2 = float(input("Digite o segundo número: "))

  # Realizando a operação escolhida
  if escolha == '1':
    resultado = num1 + num2
  elif escolha == '2':
    resultado = num1 - num2
  elif escolha == '3':
    resultado = num1 * num2
  elif escolha == '4':
    resultado = num1 / num2
  else:
    print("Opção inválida!")
    return

  # Exibindo o resultado

  print("O resultado é:", resultado)

# Chamando a função da calculadora

calculadora()
