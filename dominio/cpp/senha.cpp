#include "senha.hpp"
#include <iostream>
#include <string>

using namespace std;


Senha::Senha() : senha("123456") {}

void Senha::validar(string senha){
    static const size_t npos = -1;
    string numeros = "0123456789";
    string letrasMa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string letrasMi = "abcdefghijklmnopqrstuvwxyz";
    string simbolos = "#$%&";
    string permitidos = numeros + letrasMa + letrasMi + simbolos;
    //cout << permitidos <<endl;


    //verifica se é tamanho 6
    if(senha.empty()){
        throw invalid_argument("Erro: Senha está vazia");

    }
    if (senha.length() !=  6){
        throw invalid_argument("Erro: Senha não possui 6 caracteres");
    }

    //verifica se é caracter certo e nao se repete
    for (int i=0; i < senha.length() -1; i++){
        if(permitidos.find_first_of(senha[i]) != npos){}
        else {
           throw invalid_argument("Erro: presença de caractere inválido");
        }

        if(senha.find_first_of(senha[i], i+1) != npos) {
            throw invalid_argument("Erro: presença de caractere repetido");
        }
    }

    //verifica o ultimo digito
    if(permitidos.find_first_of(senha[senha.length() - 1]) != npos){}
    else {
        throw invalid_argument("Erro: presença de caractere inválido");
    }

    //verificar se tem um de cada
    if(senha.find_first_of(numeros)==npos) {
        throw invalid_argument("Erro: é necessário a presença de pelo menos um número");
    }
    if(senha.find_first_of(letrasMa)==npos) {
        throw invalid_argument("Erro: é necessário a presença de pelo menos uma letra maiúscula");
    }
    if(senha.find_first_of(letrasMi)==npos) {
        throw invalid_argument("Erro: é necessário a presença de pelo menos uma letra minúscula");
    }
    if(senha.find_first_of(simbolos)==npos) {
        throw invalid_argument("Erro: é necessário a presença de pelo menos um símbolo");
    }
    //cout << "validos: " + valido << endl;
}

void Senha::setSenha(string senhaProposta){
    setSenha(senhaProposta);
    senha = senhaProposta;
}

string Senha::getValor(){
    return senha;
}