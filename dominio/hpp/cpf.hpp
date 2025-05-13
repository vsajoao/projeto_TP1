#ifndef CPF_HPP_INCLUDED
#define CPF_HPP_INCLUDED
#include <string>

using namespace std;
class CPF {

    private:
        string numero_cpf;
        int array_cpf[11] = {0,0,0,0,0,0,0,0,0,0,0};
        bool cpf_array(string, int[]);
        bool validarNumerosCPF(int[]);
        bool numerosIguais(int[]);
    
    public:
        bool validarCPF(string);
        bool setCPF(string);
        string getCPF();
    };

inline string CPF::getCPF(){
    return numero_cpf;
}

#endif 
