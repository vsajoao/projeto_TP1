#include <iostream>
#include <string>

class Perfil {
private:
    std::string nome;

    // Função auxiliar para validar o nome
    bool nomeValido(const std::string& n) const {
        return n == "Conservador" || n == "Moderado" || n == "Agressivo";
    }

public:
    // Construtor com validação
    Perfil(const std::string& nomeInicial) {
        if (nomeValido(nomeInicial)) {
            nome = nomeInicial;
            std::cout << "Perfil: " << nome << std::endl;
        } else {
            std::cout << "O perfil no armazenamento eh invalido" << std::endl;
        }
    }
};
