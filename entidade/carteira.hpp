/// @file carteira.hpp
/// @brief Declaração da entidade Carteira que representa uma carteira de investimentos no sistema.

#ifndef CARTEIRA_HPP_INCLUDED
#define CARTEIRA_HPP_INCLUDED

#include "nome.hpp"
#include "codigo.hpp"
#include "perfil.hpp"

/// @class Carteira
/// @brief Representa uma carteira de investimentos associada a uma conta.
///
/// Cada carteira possui um código identificador, um nome e um perfil de investimento.
/// O código é imutável após a criação. O nome e o perfil podem ser alterados.
class Carteira {
private:
    Codigo codigo; ///< Código único da carteira (5 dígitos numéricos).
    Nome nome;     ///< Nome da carteira (até 20 caracteres, sem espaços consecutivos).
    Perfil perfil; ///< Perfil de investimento: Conservador, Moderado ou Agressivo.

public:
    /// @brief Construtor da classe Carteira.
    ///
    /// Inicializa a carteira com um código, nome e perfil válidos.
    ///
    /// @param cod Código identificador da carteira.
    /// @param nom Nome atribuído à carteira.
    /// @param perf Perfil de investimento associado.
    Carteira(Codigo cod, Nome nom, Perfil perf)
        : codigo(cod), nome(nom), perfil(perf) {}

    /// @brief Retorna o código da carteira.
    /// @return Objeto Codigo armazenado.
    Codigo getCodigo() {
        return codigo;
    }

    /// @brief Retorna o nome atual da carteira.
    /// @return Objeto Nome armazenado.
    Nome getNome() {
        return nome;
    }

    /// @brief Retorna o perfil de investimento da carteira.
    /// @return Objeto Perfil armazenado.
    Perfil getPerfil() {
        return perfil;
    }

    /// @brief Altera o nome da carteira após validação.
    ///
    /// O novo nome deve estar dentro das regras do domínio Nome.
    ///
    /// @param novoNome String contendo o novo nome proposto.
    void setNome(string novoNome) {
        nome.setNome(novoNome);
    }

    /// @brief Altera o perfil da carteira após validação.
    ///
    /// O novo perfil deve ser "Conservador", "Moderado" ou "Agressivo".
    ///
    /// @param novoPerfil String contendo o novo perfil proposto.
    void setPerfil(string novoPerfil) {
        perfil.setPerfil(novoPerfil);
    }
};

#endif // CARTEIRA_HPP_INCLUDED
