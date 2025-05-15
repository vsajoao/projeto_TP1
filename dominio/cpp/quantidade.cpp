/// @file quantidade.cpp
/// @brief Implementação dos métodos da classe Quantidade.

#include "quantidade.hpp"
#include <iostream>

void Quantidade::setQuantidade(int valor) {
    validarValorQuantidade(valor);
    this->valor_quantidade = valor;
}

void Quantidade::validarValorQuantidade(int valor) {
    if (valor < LIMITE_baixo || valor > LIMITE_cima) {
        throw std::invalid_argument("Codigo invalido: valor acima do limite.");
    }
    std::cout << "Valor valido: " << valor << std::endl;
}
