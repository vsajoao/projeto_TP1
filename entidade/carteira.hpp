/// @file carteira.hpp
/// @brief Declaração da Entidade de Carteira.

#ifndef CARTEIRA_HPP_INCLUDED
#define CARTEIRA_HPP_INCLUDED
#include "nome.hpp"
#include "perfil.hpp"
#include "codigo.hpp"

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

/// @class Carteira
/// @brief Representa uma carteira de investimentos associada a uma conta.
///
/// Cada carteira possui um código identificador, um nome e um perfil de investimento.
/// O código é imutável após a criação. O nome e o perfil podem ser alterados.

class Carteira{
private:

  Codigo codigo; ///< Código único da carteira (5 dígitos numéricos).
  Nome nome;     ///< Nome da carteira (até 20 caracteres, sem espaços consecutivos).
  Perfil perfil; ///< Perfil de investimento: Conservador, Moderado ou Agressivo.

public:
/// @brief Construtor da classe Carteira.
///
/// Inicializa a carteira com um código, nome e perfil válidos.
///
/// @param codigo Código identificador da carteira.
/// @param nome Nome atribuído à carteira.
/// @param perfil Perfil de investimento associado.

    Carteira() {};

    Carteira(Codigo codigo, Nome nome, Perfil perfil);

/// @brief Retorna o código da carteira.
/// @return Objeto Codigo armazenado.
    Codigo getCodigo();

/// @brief Altera o codigo da carteira após validação.
/// @param codigo String contendo o novo perfil proposto.
    void setCodigo(Codigo codigo);

/// @brief Retorna o nome atual da carteira.
/// @return Objeto Nome armazenado.
    Nome getValor();

/// @brief Altera o nome da carteira após validação.
/// @param novoNome String contendo o novo nome proposto.
    void setNome(Nome nome);

/// @brief Retorna o perfil de investimento da carteira.
/// @return Objeto Perfil armazenado.
    Perfil getPerfil();

/// @brief Altera o perfil da carteira após validação.
/// @param perfil String contendo o novo perfil proposto.
    void setPerfil(Perfil perfil);

};



inline Codigo Carteira::getCodigo(){
    return codigo;
}

inline void Carteira::setCodigo(Codigo codigo){
    this->codigo = codigo;
}

inline Nome Carteira::getValor(){
    return nome;
}

inline void Carteira::setNome(Nome nome){
    this->nome = nome;
}

inline Perfil Carteira::getPerfil(){
    return perfil;
}

inline void Carteira::setPerfil(Perfil perfil){
    this->perfil = perfil;
}

#endif
