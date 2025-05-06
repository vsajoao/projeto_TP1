#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED
#include <string>
using namespace std;
class Nome {

private:
    const string DEFAULT = "";
    string nome;
    bool validar(string);
public:
    bool setNome(string);
    string getNome();
};
inline string Nome::getNome(){
    return nome;
}
#endif // DOMINIOS_HPP_INCLUDED





