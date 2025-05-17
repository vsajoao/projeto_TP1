///Arthur Frauches 241017728
/// @file dinheiro.hpp
/// @brief Declaração da classe de domínio Dinheiro.

#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

#include <string>

using namespace std;

/// @class Dinheiro( representa o preço médio do papel/ações na data informada)
/// @brief Representa uma quantia em dinheiro que é paga por um determinado produto ou serviço.
/// Armazena um valor float representando dinheiro. 
/// Aceita e valida valores entre os limites 0.01 e 1.000.000.00 ou lança uma exceção caso o valor esteja fora dos limites. 
///


class Dinheiro {
/// @brief Construtor padrão da classe Dinheiro que irá conter os valores de limite inferior e superior.
///irá conter o valor monetário e o método de validação.
///
private:
    static constexpr float LIMITE_baixo = 0.01f;  ///< Valor mínimo permitido.
    static constexpr float LIMITE_cima = 1000000.00f;  ///< Valor máximo permitido.
    float valor_dinheiro; ///< Armazena o valor validado.
///
    /**
     * @brief Valida se o valor está dentro dos limites aceitáveis.
     * @param valor Valor a ser validado.
     * @throw std::invalid_argument Se valor estiver fora dos limites.
     */
    void validarValoremDinheiro(float valor);

///@brief Construtor padrão da classe Dinheiro que irá definir o valor recebido e retornar o valor monetário.
///
public:
     ///
     /// @brief Define (ou altera) o valor do atributo privado valor.
     /// @param valor Valor a ser definido.
     /// @throw std::invalid_argument Se o valor for inválido.
///   
void setDinheiro(float valor);

    ///
     /// @brief Retorna o valor atual armazenado no atributo valor.
     /// @return Valor em float armazenado em valor_dinheiro.
     ///
///    
float getDinheiro();
};

 /// @brief Retorna o valor armazenado em valor_dinheiro.
 /// @return float Valor monetário.
 ///
inline float Dinheiro::getDinheiro() {
    return valor_dinheiro;
}

#endif // DINHEIRO_HPP_INCLUDED
