#ifndef CARTEIRA_HPP_INCLUDED
#define CARTEIRA_HPP_INCLUDED

#include "nome.hpp"
#include "codigo.hpp"
#include "perfil.hpp"

class Carteira {

private:
    Codigo codigo;
    Nome nome;
    Perfil perfil;

public:
    Carteira(Codigo cod, Nome nom, Perfil perf)
        : codigo(cod), nome(nom), perfil(perf) {}

    Codigo getCodigo() {
        return codigo;
    }

    Nome getNome() {
        return nome;
    }

    Perfil getPerfil() {
        return perfil;
    }

    void setNome(string novoNome) {

    nome.setNome(novoNome);

    }

    void setPerfil(string novoPerfil) {

    perfil.setPerfil(novoPerfil);

    }
};

#endif // CARTEIRA_HPP_INCLUDED
