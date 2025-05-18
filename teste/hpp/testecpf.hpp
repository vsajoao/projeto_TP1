// Henrique França 242039130
#ifndef TESTECPF_HPP_INCLUDED
#define TESTECPF_HPP_INCLUDED
#include <iostream>
#include <stdexcept>
#include "cpf.hpp"
using namespace std;

class TesteCPF {
    private:
        string VALOR_VALIDO = "12345678909";
        string VALOR_INVALIDO = "11111111111";
        CPF *cpf;
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
