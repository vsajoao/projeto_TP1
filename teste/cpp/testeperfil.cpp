#include "testeperfil.hpp"


void TestePerfil::setUp() {
    perfil = new Perfil();
    estado = SUCESSO;
}

void TestePerfil::tearDown() {
    delete perfil;
}

void TestePerfil::testarCenarioSucesso() {
    try {
        perfil->setPerfil(VALOR_VALIDO);
        if (perfil->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument& e) {
        estado = FALHA; // Se lançar exceção, falhou
    }
}

void TestePerfil::testarCenarioFalha() {
    try {
        perfil->setPerfil(VALOR_INVALIDO);
        estado = FALHA; // Se não lançar exceção, falhou
    } catch (invalid_argument& e) {
        // Não faz nada, pois a exceção é esperada
    }
}

int TestePerfil::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
