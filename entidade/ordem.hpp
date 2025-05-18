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
/// Todos os atributos são ntes, ou seja, não podem ser modificados após a criação da ordem.
class Ordem {
private:
    Codigo codigo;                 ///< Código identificador único da ordem (5 dígitos numéricos).
    Codigo_de_Negociacao codNegociacao;   ///< Código de negociação do papel (ex: PETR4), até 12 caracteres.
    Data data;                     ///< Data da ordem no formato AAAAMMDD.
    Quantidade quantidade;         ///< Quantidade de papéis comprados na ordem (1 a 1.000.000).
    Dinheiro preco;                ///< Preço total da ordem, calculado pelo sistema.
    Codigo codigoCarteira;         ///< Código da carteira à qual a ordem está vinculada.

public:
    /// @brief utor da classe Ordem.
    ///
    /// Inicializa todos os atributos da ordem com valores válidos e imutáveis após ução.
    ///
    /// @param codigo Código identificador da ordem.
    /// @param codNegociacao Código de negociação do papel.
    /// @param data Data da ordem no formato AAAAMMDD.
    /// @param quantidade Quantidade de papéis comprados.
    /// @param preco Valor total da ordem.
    /// @param codigoCarteira Código da carteira associada à ordem.
    Ordem(Codigo& codigo,
          Codigo_de_Negociacao& codNegociacao,
          Data& data,
          Quantidade& quantidade,
          Dinheiro& preco,
          Codigo& codigoCarteira)
        : codigo(codigo),
          codNegociacao(codNegociacao),
          data(data),
          quantidade(quantidade),
          preco(preco),
          codigoCarteira(codigoCarteira) {}


     /// @brief Construtor default.
    Ordem() {}

    /// @brief Retorna o código da ordem.
    /// @return Referência não modificável ao objeto Codigo.
    Codigo& getCodigo() {
        return codigo;
    }

    /// @brief Retorna o código de negociação do papel.
    /// @return Referência não modificável ao objeto Codigo_de_Negociacao.
    Codigo_de_Negociacao& getCodNegociacao() {
        return codNegociacao;
    }

    /// @brief Retorna a data da ordem.
    /// @return Referência não modificável ao objeto Data.
    Data& getData() {
        return data;
    }

    /// @brief Retorna a quantidade de papéis comprados.
    /// @return Referência não modificável ao objeto Quantidade.
    Quantidade& getQuantidade() {
        return quantidade;
    }

    /// @brief Retorna o preço total da ordem.
    /// @return Referência não modificável ao objeto Dinheiro.
    Dinheiro& getDinheiro() {
        return preco;
    }

    /// @brief Retorna o código da carteira associada.
    /// @return Referência não modificável ao objeto Codigo.
    Codigo& getCodigoCarteira() {
        return codigoCarteira;
    }
    // Métodos set adicionados abaixo
    void setCodigo(const Codigo& novoCodigo) {
        codigo = novoCodigo;
    }

    void setCodNegociacao(const Codigo_de_Negociacao& novoCodNegociacao) {
        codNegociacao = novoCodNegociacao;
    }

    void setData(const Data& novaData) {
        data = novaData;
    }

    void setQuantidade(const Quantidade& novaQuantidade) {
        quantidade = novaQuantidade;
    }

    void setPreco(const Dinheiro& novoPreco) {
        preco = novoPreco;
    }

    void setCodigoCarteira(const Codigo& novoCodigoCarteira) {
        codigoCarteira = novoCodigoCarteira;
    }
};

#endif // ORDEM_HPP_INCLUDED