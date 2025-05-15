#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED
#include <string>
using namespace std;
class Nome {

private:

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





