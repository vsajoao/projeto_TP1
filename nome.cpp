#include "nome.hpp"
#include <stdexcept>    // Para std::invalid_argument
#include <list>         // Para std::list usado na verificação

using namespace std;

// Valida o nome de acordo com as regras descritas acima.
// Lança invalid_argument com mensagem apropriada se o nome for inválido.
// Caso contrário, retorna true.
bool Nome::validar(string nome) {
    const int TAMANHO_MAX = 20;
    list<char> caracteresValidos;

    // 1) Verifica comprimento máximo
    if (nome.length() > TAMANHO_MAX) {
        // Nome muito longo
        throw invalid_argument("Nome excede 20 caracteres.");
    }

    // 2) Verifica cada caractere
    for (char c : nome) {
        bool digito    = (c >= '0' && c <= '9');
        bool maiuscula = (c >= 'A' && c <= 'Z');
        bool minuscula = (c >= 'a' && c <= 'z');
        bool espaco    = (c == ' ');

        // Se não for nenhum dos tipos válidos, erro
        if (!(digito || maiuscula || minuscula || espaco)) {
            throw invalid_argument("Nome contém caractere inválido: '");
        }

        caracteresValidos.push_back(c);
    }

    // 3) Verifica espaços consecutivos
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

    // Se chegou até aqui, está válido
    return true;
}

// Tenta atribuir o nome após validação.
// Se validar() lançar exceção, ela será propagada para quem chamou.
// Retorna true se o nome foi atribuído com sucesso.
bool Nome::setNome(string nome) {
    // Chama validar; se inválido, invalid_argument é lançado
    validar(nome);

    // Atribui o valor ao atributo interno
    this->nome = nome;
    return true;
}

string Nome::getValor(){
    return nome;
}
