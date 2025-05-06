#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED
#include <string>
class Codigo {

private:
    std::string codigo;

public:
    Codigo();
    std::string getCodigo() const;
    void setCodigo(const std::string& codigo);

};

#endif // DOMINIOS_HPP_INCLUDED
