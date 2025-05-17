/// @file data.hpp
/// @brief Declaração da classe de domínio Data.

#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <string>
using namespace std;
///
/// @class Data
/// @brief Representa o momento em que uma ordem de compra foi realizada usando o formato AAAAMMDD como validação.
/// A classe valida se o valor informado possui exatamente 8 dígitos numéricos (AAAA-MM-DD),
/// se representa uma data real (dia compatível com o mês) e se o ano é bissexto quando necessário.
///
class Data {
private:
    string data; ///< Armazena a data validada no formato AAAAMMDD.

    /// @brief Verifica se um determinado ano é bissexto.
    /// @param ano Ano no formato inteiro (ex: 2024).
    /// @return true se o ano for bissexto, false caso contrário.
    bool ehAnoBissexto(int ano) const;
///
    /// @brief Retorna a quantidade de dias do mês informado, considerando se o ano é bissexto.
    /// @param mes Mês (1 a 12).
    /// @param ano Ano (ex: 2024).
    /// @return Quantidade de dias válidos para o mês (28, 29, 30 ou 31).
   ///
    int diasNoMes(int mes, int ano) const;

public:
    /// @brief Construtor padrão da classe Data.
    ///
    /// Inicializa a data com o valor padrão "AAAAMMDD".
    Data();
///
    /// @brief Recupera o valor atual da data armazenada.
    /// @return String contendo a data no formato AAAAMMDD.
    string getValor() const;
    
///
    /// @brief Define o valor da data após validação.
    ///
    /// Verifica se a string tem 8 dígitos, se todos são numéricos, e se a combinação ano/mês/dia representa uma data válida.
    /// Em caso de erro, exibe mensagens no console e mantém o valor anterior.
    ///
    /// @param data String contendo a data a ser atribuída.
    void setData(string data);
};

#endif // DATA_HPP_INCLUDED
