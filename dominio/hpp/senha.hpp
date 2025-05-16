/// senha.hpp
/// Declaração da classe de domínio Senha.


#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED
#include <string>

using namespace std;

/// Classe Senha
/// Uma conjunto ordenado de caracteres criada por um usuário que apenas  o provedor de serviço e o usuario conhecem.
/// Sendo usada como chave de acesso a serviços e informações, garantindo que apenas o usuário está tendo acesso.
///
/// Classe armazena uma string de caracteres com as seguintes regras para criação da String:
///   Seis caracteres.
///   Cada caracter pode ser dígito (0-9), letra (A-Zou a-z), #, $, % ou &.
///   Não há caracter duplicado.
///   Existe pelo menos um dígito (0-9).
///   Existe pelo menos uma letra maiúscula (A - Z).
///   Existe pelo menos uma letra minúscula (a - z).
///   Existe pelo menos um caracter especial (#, $, % ou &).

class Senha{

    private:
    ///Valor a ser armazenado
    string senha; 
    ///Valida se a string atende aos requisitos segundo as regras para criação
    /// Lança excessão invalid_argument quando não atende a algum reuisito, com especificação de requiito é no valor da exceção
    void validarSenha(string senha); 


    public:
    Senha();
    // Muda a string senha, validando primeiro
    void setSenha(string senha);
    // Retorna a string senha
    string getSenha();

};

#endif