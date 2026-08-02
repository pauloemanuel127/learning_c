/**
 * @file main.c
 * @author pauloemanuel127
 * @date 02 de agosto de 2026
 * @brief Arquivo principal (main), responsavel por aplicar a logica da calculadora, e trazer a interação entre o usuario e o codigo
 * 
 * @note Aqui foi o toque final do projeto, onde tive que me adaptar a linguagem de C para o uso das estruturas condicionais,
 * no futuro pretendo colocar um loop para manter a calculadora em funcionamento.
 */

#include <stdio.h>
#include "../include/calc.h"

/**
 * @brief Função principal (main), responsavel pelo funcionamento do programa
 * 
 * Inicia a calculadora, e é responsavel pela identificação e o uso das funções para os calculos.
 * 
 * @return Retorna 0 indicando que o programa funcionou.
 */

int main () {

    double a, b, result;
    char op;

    printf("Bem vindo a calculadora, digite sua operação de maneira algebrica como no exemplo: a + b."
        "\nPara soma usamos o operador '+', para subtração '-', para multiplicação temos '*' e para divisão '/'\n");
    scanf("%lf %c %lf", &a, &op, &b);

    if (op == '+') {

        result = soma(a, b);
        printf("A soma de %.2f e %.2f foi igual à %.2f\n", a, b, result);
    }

    else if (op == '-') {

        result = subtracao(a, b);
        printf("A subtração de %.2f e %.2f foi igual à %.2f\n", a, b, result);
    }

    else if (op == '*') {

        result = multiplicacao(a, b);
        printf("A multiplicação de %.2f e %.2f foi igual à %.2f\n", a, b, result);
    }

    else if (op == '/') {

        result = divisao(a, b);
        printf("A divisão de %.2f e %.2f foi igual a %.2f\n", a, b, result);
    }

    else {

        printf("Operador invalido "
            "\n tente rodar o programa novamente para poder realizar sua operação\n");
    }

    return 0;
}