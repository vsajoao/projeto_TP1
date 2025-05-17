//Joao Pedro Borges Saraiva 231025280
#ifndef TESTEPERFIL_HPP_INCLUDED
#define TESTEPERFIL_HPP_INCLUDED
#include <iostream>
#include <stdexcept>
#include "perfil.hpp"  
using namespace std;

class TestePerfil {
    private:
        string VALOR_VALIDO = "Conservador";
        string VALOR_INVALIDO = "Betoneira";
        Perfil *perfil;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif