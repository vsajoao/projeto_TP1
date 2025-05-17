#include "perfil.hpp"

class TUPerfil {
private:
    Perfil* perfil;
    int estado;
    const std::string VALOR_VALIDO = "Moderado";
    const std::string VALOR_INVALIDO = "Betoneira";

    void setUp() {
        perfil = new Perfil();
        estado = SUCESSO;
    }

    void tearDown() {
        delete perfil;
    }

    void testarCenarioValorValido() {
        try {
            perfil->setPerfil(VALOR_VALIDO);
            if (perfil->getValor() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch (std::invalid_argument&) {
            estado = FALHA;
        }
    }

    void testarCenarioValorInvalido() {
        try {
            perfil->setPerfil(VALOR_INVALIDO);
            estado = FALHA; // Nao deveria aceitar
        }
        catch (std::invalid_argument&) {
            if (perfil->getValor() == VALOR_INVALIDO)
                estado = FALHA;
        }
    }

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run() {
        setUp();
        testarCenarioValorValido();
        testarCenarioValorInvalido();
        tearDown();
        return estado;
    }
};
