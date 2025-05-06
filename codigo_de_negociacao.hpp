#ifndef CODIGODENEGOCIACAO_HPP_INCLUDED
#define CODIGODENEGOCIACAO_HPP_INCLUDED
#include <string>
using namespace std;

class Codigo_de_Negociacao {
    private:
        string codigo_de_negociacao;
    
    public:
        Codigo_de_Negociacao();
        Codigo_de_Negociacao(string);
        string getCodigo();
        void setCodigo(string);
        void validar(string);


};

#endif