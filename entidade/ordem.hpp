#ifndef ORDEM_HPP_INCLUDED
#define ORDEM_HPP_INCLUDED

#include "codigo.hpp"
#include "codigo_de_negociacao.hpp"
#include "data.hpp"
#include "quantidade.hpp"
#include "dinheiro.hpp"

class Ordem {
private:
    const Codigo codigo;
    const CodNegociacao codNegociacao;
    const Data data;
    const Quantidade quantidade;
    const Dinheiro preco;
    const Codigo codigoCarteira;

public:
    Ordem(const Codigo& codigo,
          const CodNegociacao& codNegociacao,
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

    const Codigo& getCodigo() const {
        return codigo;
    }

    const CodNegociacao& getCodNegociacao() const {
        return codNegociacao;
    }

    const Data& getData() const {
        return data;
    }

    const Quantidade& getQuantidade() const {
        return quantidade;
    }

    const Dinheiro& getDinheiro() const {
        return preco;
    }

    const Codigo& getCodigoCarteira() const {
        return codigoCarteira;
    }
};

#endif // ORDEM_HPP_INCLUDED