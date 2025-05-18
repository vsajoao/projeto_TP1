///232012956 Joao Victor Silva Araruna
/// @file perfil.hpp
/// @brief Declaração da classe de domínio Perfil.

#ifndef PERFIL_HPP_INCLUDED
#define PERFIL_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/// @class Perfil
/// @brief Representa uma forma de personalizar as ordens e ajustar o risco segundo a preferência do usuário.
///
/// O perfil define o nível de tolerância ao risco do investidor.
/// Os valores permitidos são: "Conservador", "Moderado" ou "Agressivo".
class Perfil {
private:
    string perfil; ///< Armazena o perfil validado.

public:
    /// @brief Construtor padrão da classe Perfil.
    ///
    /// Inicializa o perfil com o valor padrão "sem perfil".
    Perfil();

    /// @brief Retorna o valor atual do perfil armazenado.
    /// @return String com o valor do perfil.
    string getValor();

    /// @brief Define o valor do perfil após validação.
    ///
    /// O valor deve ser exatamente "Conservador", "Moderado" ou "Agressivo".
    ///
    /// @param perfil String contendo o perfil proposto.
    /// @throw std::invalid_argument Se o valor for diferente dos três permitidos.
    void setPerfil(string perfil);
};

#endif // PERFIL_HPP_INCLUDED
