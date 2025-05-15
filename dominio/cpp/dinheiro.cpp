/// @file dominios.cpp
/// @brief Implementação dos métodos da classe Dinheiro.

#include <iostream>
#include "dinheiro.hpp"
#include <stdexcept>

/**
 * @brief Valida se o valor está dentro dos limites aceitáveis.
 * @param valor Valor a ser validado.
 * @throw std::invalid_argument Se o valor for menor que 0.01 ou maior que 1.000.000.
 */
void Dinheiro::validarValoremDinheiro(float valor) {
    if (valor < LIMITE_baixo || valor > LIMITE_cima) {
        throw std::invalid_argument("Codigo invalido: valor acima do limite.");
    }
    std::cout << "Valor valido: " << valor << std::endl;
}

/**
 * @brief Define a quantidade de dinheiro após validar o valor.
 * @param valor Valor a ser definido.
 * @throw std::invalid_argument Se o valor estiver fora dos limites.
 */
void Dinheiro::setDinheiro(float valor) {
    validarValoremDinheiro(valor);
    this->valor_dinheiro = valor;
}
