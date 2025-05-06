#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED
#include <string>
using namespace std;

class Senha{

    private:
        string senha;
        bool validarSenha(string senha);

    public:
        Senha();
        void setSenha(string senha);
        string getSenha();

};
inline string Senha::getSenha(){
    return senha;
}

#endif // DOMINIOS_HPP_INCLUDED
