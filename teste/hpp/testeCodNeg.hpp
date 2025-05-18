/// João Vitor Frabis Zago 242039256

#ifndef TESTE_CODIGO_DE_NEGOCIACAO_HPP_INCLUDED
#define TESTE_CODIGO_DE_NEGOCIACAO_HPP_INCLUDED
#include <iostream>
#include <stdexcept>
#include "codigo_de_negociacao.hpp"  
using namespace std;

/// Teste unitário da classe Codigo_de_Negociacao
/// Testa se a classe senha está guardando variáveis e executando funções corretamente

class TUCodigo_de_Negociacao {
    private:
        /// Valor que atende a todos os requisitos
        string VALOR_VALIDO = "aA0 123bc";
        /// Valor que não atende a maior parte dos requisitos
        string VALOR_INVALIDO = "a4356ayt757648tyjsd/;.xh@##$";
        Codigo_de_Negociacao *codigo_de_negociacao;
        int estado;
        /// Funções de teste
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        /// Definição de estados de sucesso e falha
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        /// Função que executas todas as funções de teste
        int run();
};

#endif