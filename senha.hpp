#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED
#include <string>

class Senha{

    private:
    string senha;
    bool validarSenha(string senha);

    public:
    Senha();
    void setSenha(string senha);
    string getSenha();

};

#endif // DOMINIOS_HPP_INCLUDED
