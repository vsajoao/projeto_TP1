#include "codigo.hpp"
#include <iostream>
#include <string>

using namespace std;

Codigo::Codigo() : codigo("00000") {}

string Codigo::getValor() const {
    return codigo;
}

void Codigo::setCodigo(string codigo) {

    //verifica tamanho
    if (codigo.length() != 5) {
        cout << "Erro: O código deve ter exatamente 5 dígitos" << endl;
        return;
    }

    //verifica se tem char
    for (char c : codigo) {
        if (!isdigit(c)) {
            cout << "Erro: O código deve conter apenas números" << endl;
            return;
        }
    }

    //se tudo certo atribui valor cc atribui valor default 00000
    this->codigo = codigo;
}
