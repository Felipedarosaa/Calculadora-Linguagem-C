#include <stdio.h>
#include <locale.h> //código pra poder usar acento

main()
{
	setlocale(LC_ALL, "Portuguese"); // código pra poder usar acento
	printf("-- Calculadora Gigatonica 1.1 --\n\n");
	printf(" Operações: \n ( + ) \n ( - ) \n ( x ) \n ( / ) \n");

	float n1, n2, result;
	char op;

	printf("\n Informe uma operacaoo: ");
	scanf("%c", &op);

	printf(" Informe um numero: ");
	scanf("%f", &n1);

	printf(" Informe outro numero: ");
	scanf("%f", &n2);

	if (op == '+') // estrutura de verificação se(if) variavel op = + entao n1 + n2 senão (else) verifica de novo
	{
		result = n1 + n2;
	}
	else
	{
		if (op == '-')
		{
			result = n1 - n2;
		}
		else
		{
			if (op == 'x')
			{
				result = n1 * n2;
			}
			else
			{
				if (op == '/')
				{
					result = n1 / n2;
				}
				else
				{
					printf("\n Erro, operação inválida"); // se o caracter informado n for nenhum dos registrados, a mensagem de erro sobe
				}
			}
		}
	}
	printf("\n  %.f %c %.f = %.f", n1, op, n2, result);
}