#include "nome.hpp"
#include <stdexcept>    
#include <list>         

using namespace std;


bool Nome::validar(string nome) {
    const int TAMANHO_MAX = 20;
    list<char> caracteresValidos;

    if (nome.length() > TAMANHO_MAX) {
        
        throw invalid_argument("Nome excede 20 caracteres.");
    }


    for (char c : nome) {
        bool digito    = (c >= '0' && c <= '9');
        bool maiuscula = (c >= 'A' && c <= 'Z');
        bool minuscula = (c >= 'a' && c <= 'z');
        bool espaco    = (c == ' ');

        if (!(digito || maiuscula || minuscula || espaco)) {
            throw invalid_argument("Nome contém caractere inválido: '");
        }

        caracteresValidos.push_back(c);
    }

    int contEspacos = 0;
    for (char c : nome) {
        if (c == ' ') {
            contEspacos++;
            if (contEspacos >= 2) {
                throw invalid_argument("Nome nao pode conter dois espaços consecutivos.");
            }
        } else {
            contEspacos = 0;
        }
    }

    return true;
}

bool Nome::setNome(string nome) {
    validar(nome);

    this->nome = nome;
    return true;
}
