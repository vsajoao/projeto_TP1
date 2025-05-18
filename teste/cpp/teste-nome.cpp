#include "teste-nome.hpp"
#include <string>
#include <iostream>

const string TUNome::VALOR_VALIDO = "joao valido";
const string TUNome::VALOR_INVALIDO = "Joao  invalido";

void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown() {
    delete nome;
}

void TUNome::testarCenarioValorValido() {
    try {
        nome->setNome(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &e) {
        estado = FALHA;
        cout << "aqui1" << endl;
    }
}

void TUNome::testarCenarioValorInvalido() {
    try {
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &e) {
    if(nome->getValor() == VALOR_INVALIDO)
        estado = FALHA;
    }
}

int TUNome::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
