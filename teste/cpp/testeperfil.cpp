#include "testeperfil.hpp"

// Definicao dos valores constantes
const string TestePerfil::VALOR_VALIDO = "Conservador";
const string TestePerfil::VALOR_INVALIDO = "Betoneira";

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
        if (perfil->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (std::invalid_argument&) {
        estado = FALHA;
    }
}

void TestePerfil::testarCenarioFalha() {
    try {
        perfil->setPerfil(VALOR_INVALIDO);
        estado = FALHA;  // Nao deve aceitar se o valor for invalido
    }
    catch (std::invalid_argument&) {
        if (perfil->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TestePerfil::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
