// Henrique França 242039130
#ifndef TESTECONTA_HPP_INCLUDED
#define TESTECONTA_HPP_INCLUDED
#include "conta.hpp"

class TesteConta{
  private: 
    string V_CPF_VALIDO = "12345678909";
    string V_NOME_VALIDO = "Leon 10";
    string V_SENHA_VALIDO = "A1$bc3";

    Conta *conta;
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