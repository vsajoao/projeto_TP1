/// @file ordem.hpp
/// @brief Declaração da entidade Ordem, que representa uma ordem de compra de papéis no sistema.

#ifndef ORDEM_HPP_INCLUDED
#define ORDEM_HPP_INCLUDED

#include "codigo.hpp"
#include "codigo_de_negociacao.hpp"
#include "data.hpp"
#include "quantidade.hpp"
#include "dinheiro.hpp"

/// @class Ordem
/// @brief Representa uma ordem de compra de papéis no sistema.
///
/// A ordem é composta por um identificador próprio, um código de negociação do papel,
/// uma data, uma quantidade de papéis, o preço total da ordem, e o código da carteira à qual está associada.
/// Todos os atributos são constantes, ou seja, não podem ser modificados após a criação da ordem.
class Ordem {
private:
    const Codigo codigo;                 ///< Código identificador único da ordem (5 dígitos numéricos).
    const Codigo_de_Negociacao codNegociacao;   ///< Código de negociação do papel (ex: PETR4), até 12 caracteres.
    const Data data;                     ///< Data da ordem no formato AAAAMMDD.
    const Quantidade quantidade;         ///< Quantidade de papéis comprados na ordem (1 a 1.000.000).
    const Dinheiro preco;                ///< Preço total da ordem, calculado pelo sistema.
    const Codigo codigoCarteira;         ///< Código da carteira à qual a ordem está vinculada.

public:
    /// @brief Construtor da classe Ordem.
    ///
    /// Inicializa todos os atributos da ordem com valores válidos e imutáveis após construção.
    ///
    /// @param codigo Código identificador da ordem.
    /// @param codNegociacao Código de negociação do papel.
    /// @param data Data da ordem no formato AAAAMMDD.
    /// @param quantidade Quantidade de papéis comprados.
    /// @param preco Valor total da ordem.
    /// @param codigoCarteira Código da carteira associada à ordem.
    Ordem(const Codigo& codigo,
          const Codigo_de_Negociacao& codNegociacao,
          const Data& data,
          const Quantidade& quantidade,
          const Dinheiro& preco,
          const Codigo& codigoCarteira)
        : codigo(codigo),
          codNegociacao(codNegociacao),
          data(data),
          quantidade(quantidade),
          preco(preco),
          codigoCarteira(codigoCarteira) {}

    /// @brief Retorna o código da ordem.
    /// @return Referência constante ao objeto Codigo.
    const Codigo& getCodigo() const {
        return codigo;
    }

    /// @brief Retorna o código de negociação do papel.
    /// @return Referência constante ao objeto CodNegociacao.
    const Codigo_de_Negociacao& getCodNegociacao() const {
        return codNegociacao;
    }

    /// @brief Retorna a data da ordem.
    /// @return Referência constante ao objeto Data.
    const Data& getData() const {
        return data;
    }

    /// @brief Retorna a quantidade de papéis comprados na ordem.
    /// @return Referência constante ao objeto Quantidade.
    const Quantidade& getQuantidade() const {
        return quantidade;
    }

    /// @brief Retorna o preço total da ordem.
    /// @return Referência constante ao objeto Dinheiro.
    const Dinheiro& getDinheiro() const {
        return preco;
    }

    /// @brief Retorna o código da carteira associada à ordem.
    /// @return Referência constante ao objeto Codigo.
    const Codigo& getCodigoCarteira() const {
        return codigoCarteira;
    }
};

#endif // ORDEM_HPP_INCLUDED
