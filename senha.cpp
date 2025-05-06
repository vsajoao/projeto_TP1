#include "senha.hpp"
#include <iostream>
#include <string>

using namespace std;


Senha::Senha() : senha("123456") {}

bool Senha::validarSenha(string senha){
    static const size_t npos = -1;
    string numeros = "0123456789";
    string letrasMa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string letrasMi = "abcdefghijklmnopqrstuvwxyz";
    string simbolos = "#$%&";
    string permitidos = numeros + letrasMa + letrasMi + simbolos;
    //cout << permitidos <<endl;


    //verifica se é tamanho 6
    if(senha.empty()){
        cout << "Erro: Senha está vazia" << endl;
        return false;
    }
    if (senha.length() !=  6){
        cout << "Erro: Senha não possui 6 caracteres" << endl;
        return false;
    }

    //verifica se é caracter certo e nao se repete
    for (int i=0; i < senha.length() -1; i++){
        if(permitidos.find_first_of(senha[i]) != npos){}
        else {
            cout << "Erro: presença de caractere inválido" << endl;
            return false;
        }

        if(senha.find_first_of(senha[i], i+1) != npos) {
            cout << "Erro: presença de caractere repetido" << endl;
            return false;
        }
    }

    //verifica o ultimo digito
    if(permitidos.find_first_of(senha[senha.length() - 1]) != npos){}
    else {
        cout << "Erro: presença de caractere inválido" << endl;
        return false;
    }

    //verificar se tem um de cada
    int valido = 0;
    if(senha.find_first_of(numeros)!=npos) {valido++;}
    else {
        cout << "Erro: é necessário a presença de pelo menos um número" << endl;
        return false;
    }
    if(senha.find_first_of(letrasMa)!=npos) {valido++;}
    else {
        cout << "Erro: é necessário a presença de pelo menos uma letra maiúscula" << endl;
        return false;
    }
    if(senha.find_first_of(letrasMi)!=npos) {valido++;}
    else {
        cout << "Erro: é necessário a presença de pelo menos uma letra minúscula" << endl;
        return false;
    }
    if(senha.find_first_of(simbolos)!=npos) {valido++;}
    else {
        cout << "Erro: é necessário a presença de pelo menos um símbolo" << endl;
        return false;
    }
    //cout << "validos: " + valido << endl;
    if(valido != 4) return false;

    return true;
}

void Senha::setSenha(string senhaProposta){
    if(validarSenha(senhaProposta)){
        senha = senhaProposta;
    }
    else {
        cout << "Erro: Senha inválida." << endl;
    }
}

string Senha::getSenha(){
    return senha;
}