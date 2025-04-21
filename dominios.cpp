#include "dominios.hpp"
#include <iostream>
#include <string>
//---------------------------------------------------CODIGO---------------------------------------------------------------------------//
Codigo::Codigo() : codigo("00000") {}

std::string Codigo::getCodigo() const {
    return codigo;
}

void Codigo::setCodigo(const std::string& codigo) {

    //verifica tamanho
    if (codigo.length() != 5) {
        std::cout << "Erro: O código deve ter exatamente 5 dígitos" << std::endl;
        return;
    }

    //verifica se tem char
    for (char c : codigo) {
        if (!isdigit(c)) {
            std::cout << "Erro: O código deve conter apenas números" << std::endl;
            return;
        }
    }

    //se tudo certo atribui valor cc atribui valor default 00000
    this->codigo = codigo;
}
//---------------------------------------------------DATA---------------------------------------------------------------------------//
using namespace std;

Data::Data() : data("AAAAMMDD") {}

//verifica se o ano eh bissexto
bool Data::ehAnoBissexto(int ano) const {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

//verifica quantiade de dias no mes
int Data::diasNoMes(int mes, int ano) const {
    switch (mes) {
        case 2: return ehAnoBissexto(ano) ? 29 : 28;//fevereiro,se for bissexto 29 cc 28
        case 4: case 6: case 9: case 11: return 30;//meses com 30 dias
        default: return 31;//cc 31
    }
}

void Data::setData(const std::string& data) {

    //verifica tamanho correto
    if (data.size() != 8) {
        cout << "Erro: Data deve conter 8 dígitos." << endl;
        return;
    }

    //verifica se tem char
    for (char c : data) {
        if (!isdigit(c)) {
            cout << "Erro: Data deve conter apenas dígitos." << endl;
            return;
        }
    }

    //extrai partes da data e verifica datas invalidas
    int ano = stoi(data.substr(0, 4));
    int mes = stoi(data.substr(4, 2));
    int dia = stoi(data.substr(6, 2));


    if (ano < 1 || ano > 9999) {
        cout << "Erro: Ano inválido." << endl;
        return;
    }


    if (mes < 1 || mes > 12) {
        cout << "Erro: Mês inválido." << endl;
        return;
    }

    int maxDias = diasNoMes(mes, ano);
    if (dia < 1 || dia > maxDias) {
        cout << "Erro: Dia inválido para o mês/ano." << endl;
        return;
    }

    //se passou pelos testes atribui valor cc atribui valor default de AAAAMMDD
    this->data = data;
}

std::string Data::getData() const {
    return data;
}

//---------------------------------------------------SENHA---------------------------------------------------------------------------//
Senha::Senha() : senha("123456") {}

bool Senha::validarSenha(string senha){
    static const size_t npos = -1;
    string numeros = "0123456789";
    string letrasMa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string letrasMi = "abcdefghijklmnopqrstuvwxyz";
    string simbolos = "#$%&";
    string permitidos = numeros + letrasMa + letrasMi + simbolos;
    cout << permitidos <<endl;


    //verifica se é tamanho 6
    if(senha.empty()){
        cout << "Erro: Senha está vazia" << endl;
        return false;
    }
    if (senha.length() !=  6){
        cout << "Erro: Senha não possui 6 caracteres" << endl;
        return false;
    }

    //verifica se é caracter certo e se n�o se repete
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