/// Arthur Frauches 241017728
/// @file teste_carteira.hpp
/// @brief Declaração da classe de teste de unidade da entidade Carteira.

#ifndef TESTE_CARTEIRA_HPP_INCLUDED
#define TESTE_CARTEIRA_HPP_INCLUDED

#include "carteira.hpp"

#include <stdexcept>
#include <string>
#include <iostream>

/// @class TUCarteira
/// @brief Classe de teste de unidade para a entidade Carteira.
class TUCarteira {
private:
    static const std::string VALOR_VALIDO_CODIGO;
    static const std::string VALOR_VALIDO_NOME;
    static const std::string VALOR_VALIDO_PERFIL;

    Carteira* carteira; ///< Ponteiro para instância de Carteira sendo testada.
    int estado;         ///< Armazena o estado do teste (SUCESSO ou FALHA).

    void setUp();       ///< Inicializa a carteira antes do teste.
    void tearDown();    ///< Libera memória após o teste.
    void testarCenario(); ///< Executa os testes com valores válidos.

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run(); ///< Executa todos os testes e retorna SUCESSO ou FALHA.
};

#endif // TESTE_CARTEIRA_HPP_INCLUDED
