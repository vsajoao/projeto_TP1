#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED
#include <string>

class Data{

private:
    std::string data;
    bool ehAnoBissexto(int ano) const;
    int diasNoMes(int mes, int ano) const;

public:
    Data();
    std::string getData() const;
    void setData(const std::string& data);

};

#endif // DOMINIOS_HPP_INCLUDED