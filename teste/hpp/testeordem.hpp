// Henrique França 242039130
#ifndef TESTEORDEM_HPP_INCLUDED
#define TESTEORDEM_HPP_INCLUDED
#include "ordem.hpp"
using namespace std;
#include <iostream>

class TesteOrdem{
  private: 
    string V_CODIGO_VALIDO = "12345";
    string V_DATA_VALIDO = "20002020";
    float V_DINHEIRO_VALIDO = 3461.00f;
    int V_QUANTIDADE_VALIDO = 20310;
    string V_C_NEGOCIACAO_VALIDO = "A1$bc3";



    Ordem *ordem;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

  public:
    const static int SUCESSO = 0;
    const static int FALHA = 1;
    int run();

};




#endif