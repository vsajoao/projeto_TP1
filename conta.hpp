#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED
#include "cpf.hpp"
#include "nome.hpp"
#include "senha.hpp"
#include <string>


using namespace std;
class Conta {

    private:
    CPF cpf;
    Nome nome;
    Senha senha;



    public:

    Conta(CPF cpf, Nome nome, Senha senha)
        : cpf(cpf), nome(nome), senha(senha) {
    }

    string getCPF();
    void setCPF(string);
    string getNome();
    bool setNome(string);
    string getSenha();
    void setSenha(string);

    };

    inline string Conta::getCPF(){
        return cpf.getCPF();
    }
    inline void Conta::setCPF(string valor){
       cpf.setCPF(valor);
    }
    inline string Conta::getNome(){
        return nome.getValor();
    }
    inline bool Conta::setNome(string valor){
       return nome.setNome(valor);
    }
    inline string Conta::getSenha(){
        return senha.getSenha();
    }
    inline void Conta::setSenha(string valor){
        return senha.setSenha(valor);
    }




#endif
