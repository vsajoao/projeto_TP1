/// leonardo tomé sampaio 222005448
/// @file nome.hpp
/// @brief Declaração da classe de domínio Nome.

#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>
using namespace std;

/// @class Nome
/// @brief Representa a forma de identificação do usuário ou organização das carteiras.
/// um nome válido com até 20 caracteres, sem espaços consecutivos.
/// O nome pode conter letras maiúsculas e minúsculas, dígitos e espaços.
/// Não pode conter dois ou mais espaços seguidos, nem exceder 20 caracteres.
///
class Nome {
private:
    string nome; ///< Armazena o nome validado.
///
    /// @brief Verifica se o nome fornecido está dentro do formato permitido.
    /// O nome deve conter no máximo 20 caracteres e pode conter letras (A-Z, a-z),
    /// números (0-9) e espaços, desde que não estejam em sequência.
    /// @param nome String a ser validada.
    /// @return true se o nome for válido.
    /// @throw std::invalid_argument Se o nome contiver caracteres inválidos, mais de 20 caracteres
    /// ou dois espaços consecutivos.
///  
bool validar(string nome);

public:
    /// @brief Define o valor do nome após validação.
    ///
    /// Atribui o nome informado à variável interna, desde que atenda às regras de formato.
    ///
    /// @param nome String contendo o nome proposto.
    /// @return true se o nome for válido e atribuído com sucesso.
    /// @throw std::invalid_argument Se o nome for inválido.
    bool setNome(string nome);

    /// @brief Retorna o valor atual do nome armazenado.
    /// @return String com o nome validado.
    string getValor();
};

/// @brief Implementação inline do método getValor().
/// @return Retorna o valor armazenado na variável nome.
inline string Nome::getValor() {
    return nome;
}

#endif // NOME_HPP_INCLUDED






