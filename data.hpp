#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED
#include <string>

using namespace std;

class Data{

private:
    string data;
    bool ehAnoBissexto(int ano) const;
    int diasNoMes(int mes, int ano) const;

public:
    Data();
    string getValor() const;
    void setData(string);

};

#endif
