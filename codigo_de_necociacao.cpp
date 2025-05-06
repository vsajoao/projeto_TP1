#include "codigo_de_negociacao.hpp"
#include <iostream>
#include <string>
Codigo_de_Negociacao::Codigo_de_Negociacao() : codigo_de_negociacao(000000000000) {}

void Codigo_de_Negociacao::validar(string codigo){
    static const size_t npos = -1;
    string numeros = "0123456789";
    string letrasMa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string letrasMi = "abcdefghijklmnopqrstuvwxyz";
    string espaco = " ";
    string permitidos = numeros + letrasMa + letrasMi + espaco;

    if(codigo.empty()){
        throw invalid_argument("Erro: Codigo de negociação está vazio");
    }

    if(!codigo.length() <= 12){
        throw invalid_argument("Erro: Código de Negociação deve ter no máximo 12 caracteres.");
    }

    //verifica se cada caracter é permitido
    for (int i=0; i < codigo.length(); i++){
        if(permitidos.find_first_of(codigo[i]) == npos){
            throw invalid_argument("Erro: presença de caractere inválido");
        }
    }
}


void Codigo_de_Negociacao::setCodigo(string codigoProposto){
    validar(codigoProposto);
    this->codigo_de_negociacao = codigoProposto;
}

string Codigo_de_Negociacao::getCodigo(){
    return this->codigo_de_negociacao;
}