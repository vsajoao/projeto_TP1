#ifndef TESTE_NOME_HPP_INCLUDED
#define TESTE_NOME_HPP_INCLUDED
#include <stdexcept>
#include "nome.hpp"
using namespace std;

class TUNome {
private:
    
    const static string VALOR_VALIDO; // Definição de constante para evitar número mágico.
    const static string VALOR_INVALIDO; // Definição de constante para evitar número mágico.
    Nome *nome; // Referência para unidade em teste.
    int estado; // Estado do teste.
    void setUp(); // Método para criar unidade em teste.
    void tearDown(); // Método para destruir unidade em teste.
    void testarCenarioValorValido(); // Cenário de teste com valor válido.
    void testarCenarioValorInvalido(); // Cenário de teste com valor inválido.

 public:
    
    const static int SUCESSO = 0; // Definição de constante para reportar resultado.
    const static int FALHA = -1; // Definição de constante para reportar resultado.
    int run(); // Método para executar teste.
};

#endif