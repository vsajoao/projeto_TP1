#include "codigo.hpp"
#include <iostream>
#include <string>
#include <stdexcept>  // necessário para std::invalid_argument

using namespace std;

Codigo::Codigo() : codigo("00000") {}

string Codigo::getValor() const {
    return codigo;
}

void Codigo::setCodigo(string codigo) {
    // Verifica tamanho
    if (codigo.length() != 5) {
        throw invalid_argument("Erro: O código deve ter exatamente 5 dígitos");
    }

    // Verifica se contém apenas números
    for (char c : codigo) {
        if (!isdigit(c)) {
            throw invalid_argument("Erro: O código deve conter apenas números");
        }
    }

    // Se tudo certo, atribui valor
    this->codigo = codigo;
}
