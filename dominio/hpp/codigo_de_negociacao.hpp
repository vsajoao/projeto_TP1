/// codigo_de_negociacao.hpp
/// Declaração da classe de domínio codigo_de_negociacao.


#ifndef CODIGODENEGOCIACAO_HPP_INCLUDED
#define CODIGODENEGOCIACAO_HPP_INCLUDED
#include <string>
using namespace std;

/// O código de negociação guarda uma string que identifica uma negociação de uma carteira, ele é parte integrante da entidade ordem
/// A string do código segue as seguintes regras:
/// Texto com até 12 caracteres.
/// Cada caracter pode ser dígito (0-9), letra (A- Zou a-z) ou espaço em branco.

class Codigo_de_Negociacao {
    private:
        /// Armazena valor da codigo de negociação
        string codigo_de_negociacao;
        /// Valida se string proposta atende à todos os requisitos, se não lança exceção invalid_argument
        void validar(string);
    
    public:
        Codigo_de_Negociacao();
        Codigo_de_Negociacao(string);
        // Retorna string codigo de Negociação
        string getValor();
        /// Muda codigo de negociacao após validação, 
        /// Retorna invalid_argument se não atender a requisitos e possui valor com qual requisito não foi atendido em seu valor
        void setCodigoDeNegociacao(string);


};

#endif