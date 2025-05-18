/// @file teste_carteira.cpp
/// @brief Implementação da classe de teste de unidade TUCarteira.

#include "testecarteira.hpp"

const std::string TUCarteira::VALOR_VALIDO_CODIGO = "12345";
const std::string TUCarteira::VALOR_VALIDO_NOME = "Nome Valido";
const std::string TUCarteira::VALOR_VALIDO_PERFIL = "Moderado";

void TUCarteira::setUp() {
    Codigo cod;
    cod.setCodigo(VALOR_VALIDO_CODIGO);

    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);

    Perfil perfil;
    perfil.setPerfil(VALOR_VALIDO_PERFIL);

    carteira = new Carteira(cod, nome, perfil);
    estado = SUCESSO;
}

void TUCarteira::tearDown() {
    delete carteira;
}

void TUCarteira::testarCenario() {
    if (carteira->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    if (carteira->getValor().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    if (carteira->getPerfil().getValor() != VALOR_VALIDO_PERFIL)
        estado = FALHA;

}

int TUCarteira::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
