#include "data.hpp"
#include <iostream>
#include <string>
#include <stdexcept>


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

void Data::setData(string data) {

    //verifica tamanho correto
    if (data.size() != 8) 
        throw invalid_argument("Erro: Data deve conter 8 dígitos." );

    //verifica se tem char
    for (char c : data) {
        if (!isdigit(c)) 
            throw invalid_argument("Erro: Data deve conter apenas dígitos.");
        
    }

    //extrai partes da data e verifica datas invalidas
    int ano = stoi(data.substr(0, 4));
    int mes = stoi(data.substr(4, 2));
    int dia = stoi(data.substr(6, 2));


    if (ano < 1 || ano > 9999) 
        throw invalid_argument("Erro: Ano inválido."); 


    if (mes < 1 || mes > 12)
        throw invalid_argument("Erro: Mês inválido.");


    int maxDias = diasNoMes(mes, ano);
    if (dia < 1 || dia > maxDias) 
        throw invalid_argument("Erro: Dia inválido para o mês/ano."); 
        


    //se passou pelos testes atribui valor cc atribui valor default de AAAAMMDD
    this->data = data;
}

string Data::getValor() const {
    return data;
}
