#ifndef TESTE_CODIGO_HPP_INCLUDED
#define TESTE_CODIGO_HPP_INCLUDED

#include <stdexcept>
#include "codigo.hpp"

using namespace std;


class TUCodigo {
private:
    static const string VALOR_VALIDO;   
    static const string VALOR_INVALIDO; 

    Codigo* codigo; 
    int estado;     

    void setUp();                    
    void tearDown();                 
    void testarCenarioValorValido(); 
    void testarCenarioValorInvalido(); 

public:
    static const int SUCESSO = 0;  ///< Constante para indicar sucesso.
    static const int FALHA   = -1; ///< Constante para indicar falha.

    int run(); 
};

#endif // TESTE_CODIGO_HPP_INCLUDED
