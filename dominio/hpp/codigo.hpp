/// @file codigo.hpp
/// @brief Declaração da classe de domínio Codigo.

#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include <string>
using namespace std;

/// @class Codigo
/// @brief Representa  um identificador único de objetos no sistema  formado por um código numérico de 5 dígitos.
///
/// Esta classe é utilizada para identificar entidades do sistema, como ordens ou carteiras.
/// O valor armazenado deve conter exatamente cinco dígitos numéricos de 0 a 9.
/// Qualquer valor fora desse padrão resulta em exceção durante a validação.
class Codigo {
private:
    string codigo;  ///< Armazena o valor do código validado (exatamente 5 dígitos numéricos).

public:
    ///
     /// @brief Construtor padrão da classe Codigo, inicializa o código com o valor "00000".
    Codigo();

    ///
     /// @brief Recupera o valor atual armazenado do código.
     /// @return Uma string com exatamente 5 dígitos numéricos.
     
     string getValor() const;

    ///
     /// @brief Define o valor do código após validação.
     /// A validação verifica se o valor contém exatamente 5 dígitos numéricos e se é composto apenas por dígitos.
     /// O valor informado deve conter exatamente 5 caracteres e todos devem ser dígitos (0–9).
     /// @param codigo String contendo o código a ser atribuído.
     /// @throw std::invalid_argument Caso o valor não tenha exatamente 5 dígitos ou contenha caracteres não numéricos.
 
    void setCodigo(string codigo);
};

#endif // CODIGO_HPP_INCLUDED
