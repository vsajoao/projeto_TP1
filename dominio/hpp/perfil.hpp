#ifndef PERFIL_HPP_INCLUDED
#define PERFIL_HPP_INCLUDED
#include <string>
#include <stdexcept>
using namespace std;

class Perfil{

    private:
    string perfil;

    public:
    Perfil();
    string getValor();
    void setPerfil(string);

};

#endif // PERFIL_HPP_INCLUDED