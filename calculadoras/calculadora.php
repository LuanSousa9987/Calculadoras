<!DOCTYPE html>
<html>
<head>
	<title>Calculadora em PHP</title>
</head>
<body>
	<h1>Calculadora em PHP</h1>
	<form method="post">
		<label for="num1">Digite o primeiro número:</label>
		<input type="number" name="num1" id="num1" required>

		<label for="operacao">Escolha a operação:</label>
		<select name="operacao" id="operacao" required>
			<option value="adicao">Adição (+)</option>
			<option value="subtracao">Subtração (-)</option>
			<option value="multiplicacao">Multiplicação (*)</option>
			<option value="divisao">Divisão (/)</option>
		</select>

		<label for="num2">Digite o segundo número:</label>
		<input type="number" name="num2" id="num2" required>

		<input type="submit" value="Calcular">
	</form>

	<?php
	if ($_SERVER["REQUEST_METHOD"] == "POST") {
		// Lendo os valores de entrada
		$num1 = $_POST["num1"];
		$num2 = $_POST["num2"];
		$operacao = $_POST["operacao"];

		// Realizando a operação escolhida
		switch ($operacao) {
			case "adicao":
				$resultado = $num1 + $num2;
				break;
			case "subtracao":
				$resultado = $num1 - $num2;
				break;
			case "multiplicacao":
				$resultado = $num1 * $num2;
				break;
			case "divisao":
				$resultado = $num1 / $num2;
				break;
			default:
				echo "<p>Opção inválida!</p>";
				return;
		}

		// Exibindo o resultado
		echo "<p>O resultado é: " . $resultado . "</p>";
	}
	?>
</body>
</html>
