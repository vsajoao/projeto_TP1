/// @file dominios.hpp
/// @brief Declaração da classe de domínio Dinheiro.

#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

#include <string>

using namespace std;

/**
 * @class Dinheiro
 * @brief Representa uma quantia monetária validada dentro de limites definidos.
 * 
 * Armazena um valor float representando dinheiro. 
 * Aceita valores entre 0.01 e 1.000.000.00 inclusive.
 */
class Dinheiro {
private:
    static constexpr float LIMITE_baixo = 0.01f;  ///< Valor mínimo permitido.
    static constexpr float LIMITE_cima = 1000000.00f;  ///< Valor máximo permitido.
    float valor_dinheiro; ///< Armazena o valor validado.

    /**
     * @brief Valida se o valor está dentro dos limites aceitáveis.
     * @param valor Valor a ser validado.
     * @throw std::invalid_argument Se valor estiver fora dos limites.
     */
    void validarValoremDinheiro(float valor);

public:
    /**
     * @brief Define o valor de dinheiro após validação.
     * @param valor Valor a ser definido.
     * @throw std::invalid_argument Se o valor for inválido.
     */
    void setDinheiro(float valor);

    /**
     * @brief Retorna o valor atual armazenado.
     * @return Valor em float armazenado em valor_dinheiro.
     */
    float getDinheiro();
};

/**
 * @brief Retorna o valor armazenado em valor_dinheiro.
 * @return float Valor monetário.
 */
inline float Dinheiro::getDinheiro() {
    return valor_dinheiro;
}

#endif // DOMINIOS_HPP_INCLUDED
