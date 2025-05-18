#include "teste-nome.hpp"
#include <string>

const string TUNome::VALOR_VALIDO = "joão valido";
const string TUNome::VALOR_INVALIDO = "João  invalido";

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
    }
}

void TUNome::testarCenarioValorInvalido() {
    try {
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA; 
    } catch (invalid_argument &e) {
        
    }
}

int TUNome::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
