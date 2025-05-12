#include "perfil.hpp"

Perfil::Perfil() : perfil("sem perfil") {}

void Perfil::setPerfil(string perfil){
    if(perfil != "conservador" &&
       perfil!= "moderado" &&
       perfil != "agressivo") {
        throw std::invalid_argument("Perfil inválido. Deve ser Conservador, Moderado ou Agressivo.");
    }

    this->perfil = perfil;
}

string Perfil::getValor(){
    return perfil;
}
