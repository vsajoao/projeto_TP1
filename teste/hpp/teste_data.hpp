/// JLeonardo tomé sampaio 222005448

#ifndef TESTE_DATA_HPP_INCLUDED
#define TESTE_DATA_HPP_INCLUDED
#include <iostream>
#include <stdexcept>
#include "data.hpp"  
using namespace std;

/// Teste unitário da classe Data
/// Testa se a classe Data está guardando variáveis e executando funções corretamente

class TUData {
    private:
        /// Valor que atende a todos os requisitos
        string VALOR_VALIDO = "20250517";
        /// Valor que não atende a algum dos requisitos
        string VALOR_INVALIDO = "20254810";
        Data *data;
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