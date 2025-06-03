/// @file testePerfil.hpp
/// @brief Declaração da classe de teste para a classe Perfil.
///
/// Este arquivo contém a definição da classe TestePerfil, que é usada para
/// testar a classe Perfil em dois cenários: sucesso e falha.

#ifndef TESTEPERFIL_HPP_INCLUDED
#define TESTEPERFIL_HPP_INCLUDED

#include <iostream>
#include <stdexcept>
#include "perfil.hpp"
using namespace std;

/// @class TestePerfil
/// @brief Classe responsável por realizar testes unitários na classe Perfil.
class TestePerfil {
    private:
        /// Valor válido para teste.
        string VALOR_VALIDO = "Conservador";

        /// Valor inválido para teste.
        string VALOR_INVALIDO = "Betoneira";

        /// Ponteiro para instância da classe Perfil que será testada.
        Perfil *perfil;

        /// Estado do teste (SUCESSO ou FALHA).
        int estado;

        /// Método de configuração do ambiente de teste.
        void setUp();

        /// Método de limpeza do ambiente de teste.
        void tearDown();

        /// Testa cenário onde o perfil é criado com valor válido.
        void testarCenarioSucesso();

        /// Testa cenário onde o perfil é criado com valor inválido.
        void testarCenarioFalha();

    public:
        /// Código retornado quando o teste é bem-sucedido.
        const static int SUCESSO = 0;

        /// Código retornado quando o teste falha.
        const static int FALHA = -1;

        /// Executa os testes da classe Perfil.
        /// @return SUCESSO se todos os testes passarem, caso contrário FALHA.
        int run();
};

#endif

