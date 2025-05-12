#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED
#include <string>

using namespace std;
class Codigo {

private:
    string codigo;

public:
    Codigo();
    string getValor() const;
    void setCodigo(string);

};

#endif
