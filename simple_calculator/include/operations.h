/**
 * @file operations.h
 * @author pauloemanuel127
 * @date 02 de agosto de 2026
 * @brief Definições das operações matematicas basicas da calculadora.
 * 
 * @note Esse arquivo faz parte de um mini projeto para eu me adaptar ao desenvolvimento na linguagem C.
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H

/**
 * @brief Realiza a operação de soma entre dois valores.
 * 
 * Está função recebe dois valores de ponto flutuante e retorna o resultado da soma entre eles.
 * 
 * @param a é o primeiro valor (parcela) que será usado na soma.
 * @param b é o segundo valor (parcela) que será usado na soma.
 * @return Retorna o resultado da soma de a + b (double).
 */

double soma(double a, double b) {

    return a + b;
}

/**
 * @brief Realiza a operação de subtração entre dois valores.
 * 
 * Está função recebe dois valores de ponto flutuante e retorna o resultado da subtração do primeiro pelo segundo.
 * 
 * @param a é o primeiro valor que será usado na subtração, ele é o valor que representa o todo do qual uma parte será subtraida.
 * @param b é o segundo valor que será usado na subtração, ele é o valor que representa a parte a qual será subtraida do todo.
 * @return Retorna o resultado da subtração de a - b (double).
 */

double subtracao(double a, double b) {

    return a - b;
}

/**
 * @brief Realiza a operação de multiplicação entre dois valores.
 * 
 * Está função recebe dois valores de ponto flutuante e retorna o resultado da multiplicação entre eles.
 * 
 * @param a é o primeiro valor da multiplicação.
 * @param b é o segundo valor da multiplicação.
 * @return Retorna o resultado da multiplicação de a * b (double).
 */

double multiplicacao(double a, double b) {

    return a * b;
}

/**
 * @brief Realiza a operação de divisão entre dois valores.
 * 
 * Está função recebe dois valores de ponto flutuante e retorna o resultado da divisão entre eles.
 * 
 * @param a é o dividendo da divisão (valor que será divido).
 * @param b é o divisor da divisão (valor que divide).
 * @return Retorna o resultado da divisão de a / b (double), sem resto.
 * @warning Por não possuir nenhuma forma de tratamento de entradas, o parâmetro 'b' não pode ser 0.
 */

double divisao(double a, double b) {

    return a / b;
}

#endif