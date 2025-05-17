/// João Vitor Frabis Zago 242039256

#ifndef TESTE_SENHA_HPP_INCLUDED
#define TESTE_SENHA_HPP_INCLUDED
#include <iostream>
#include <stdexcept>
#include "senha.hpp"  
using namespace std;

/// Teste unitário da classe Senha
/// Testa se a classe senha está guardando variáveis e executando funções corretamente

class TUSenha {
    private:
        /// Valor que atende a todos os requisitos
        string VALOR_VALIDO = "aA0#bc";
        /// Valor que não atende a maior parte dos requisitos
        string VALOR_INVALIDO = "aaaaaaa";
        Senha *senha;
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