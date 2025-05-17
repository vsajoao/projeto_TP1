///Arthur Frauches 241017728
/// @file quantidade.hpp
/// @brief Arquivo de cabeçalho responsável pela declaração da classe Quantidade.

#ifndef QUANTIDADE_HPP_INCLUDED
#define QUANTIDADE_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

///
 /// @class Quantidade
 /// @brief Representa o número de ações compradas em uma ordem, limitado entre 1 e 1.000.000.
 /// Esta classe valida se a quantidade fornecida está dentro dos limites permitidos Caso contrário, lança uma exceção.

class Quantidade {
private:
    static constexpr int LIMITE_baixo = 1;        ///< Valor mínimo permitido = 1.
    static constexpr int LIMITE_cima = 1000000;   ///< Valor máximo permitido = 1.000.000.

    int valor_quantidade; ///< Armazena o valor da quantidade.

    ///
     /// @brief Valida se o valor está entre os limites permitidos.
     /// @param valor Valor a ser validado.
     /// @throw std::invalid_argument Se o valor estiver fora dos limites.
    void validarValorQuantidade(int valor);

public:
    ///
     /// @brief Define o valor da quantidade após validação.
     /// @param valor Valor a ser definido.
     /// @throw std::invalid_argument Se o valor estiver fora dos limites.
    void setQuantidade(int valor);

    ///
     /// @brief Retorna o valor atual armazenado da quantidade.
     /// @return Valor da quantidade.
    int getQuantidade();
};

///
 /// @brief Implementação inline do método getter.
 /// @return Retorna o valor da quantidade armazenada.
inline int Quantidade::getQuantidade() {
    return valor_quantidade;
}

#endif // QUANTIDADE_HPP_INCLUDED
