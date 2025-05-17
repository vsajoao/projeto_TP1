//Joao Pedro Borges Saraiva 231025280
#ifndef TESTEPERFIL_HPP_INCLUDED
#define TESTEPERFIL_HPP_INCLUDED

#include <iostream>
#include <stdexcept>
#include "perfil.hpp"

using namespace std;

class TestePerfil {
private:
    Perfil* perfil;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif
