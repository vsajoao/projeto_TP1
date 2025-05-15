// Henrique França 242039130
#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED
#include "cpf.hpp"
#include "nome.hpp"
#include "senha.hpp"
#include <string>
using namespace std;



/**
 * @class Conta
 * @brief Classe que encapsula os dados de um registro mantido por uma instituição em nome de um cliente, onde são armazenadas informações: CPF, nome e senha.
 *
 * A classe fornece métodos para acessar e modificar esses dados,
 * bem como construtores para inicialização.
 */
class Conta {
private:

    CPF cpf;
    Nome nome;
    Senha senha;

public:
    /**
     * @brief Construtor padrão da classe Conta.
     */
    Conta() {};

    /**
     * @brief Construtor com parâmetros.
     * @param cpf CPF do usuário.
     * @param nome Nome do usuário.
     * @param senha Senha do usuário.
     */
    Conta(CPF cpf, Nome nome, Senha senha);

    /**
     * @brief Retorna o CPF da conta.
     * @return Objeto CPF.
     */
    CPF getCPF();

    /**
     * @brief Define o CPF da conta.
     * @param cpf Novo CPF a ser atribuído.
     */
    void setCPF(CPF cpf);

    /**
     * @brief Retorna o nome da conta.
     * @return Objeto Nome.
     */
    Nome getNome();

    /**
     * @brief Define o nome da conta.
     * @param nome Novo nome a ser atribuído.
     */
    void setNome(Nome nome);

    /**
     * @brief Retorna a senha da conta.
     * @return Objeto Senha.
     */
    Senha getSenha();

    /**
     * @brief Define a senha da conta.
     * @param senha Nova senha a ser atribuída.
     */
    void setSenha(Senha senha);
};



inline CPF Conta::getCPF(){
    return cpf;
}
inline void Conta::setCPF(CPF cpf){
   this->cpf = cpf;
}
inline Nome Conta::getNome(){
    return nome;
}
inline void Conta::setNome(Nome nome){
   this->nome = nome;
}
inline Senha Conta::getSenha(){
    return senha;
}
inline void Conta::setSenha(Senha senha){
    this->senha = senha;
}

#endif 