#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED
#include <string>

using namespace std;

class Senha{

    private:
    string senha;
    void validarSenha(string senha);

    public:
    Senha();
    void setSenha(string senha);
    string getSenha();

};

#endif