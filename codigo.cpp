#include "dominios.hpp"
#include <iostream>
#include <string>
//---------------------------------------------------CODIGO---------------------------------------------------------------------------//
Codigo::Codigo() : codigo("00000") {}

std::string Codigo::getCodigo() const {
    return codigo;
}

void Codigo::setCodigo(const std::string& codigo) {

    //verifica tamanho
    if (codigo.length() != 5) {
        std::cout << "Erro: O código deve ter exatamente 5 dígitos" << std::endl;
        return;
    }

    //verifica se tem char
    for (char c : codigo) {
        if (!isdigit(c)) {
            std::cout << "Erro: O código deve conter apenas números" << std::endl;
            return;
        }
    }

    //se tudo certo atribui valor cc atribui valor default 00000
    this->codigo = codigo;
}
