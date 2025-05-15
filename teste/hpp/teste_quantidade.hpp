/// @file teste_quantidade.hpp
/// @brief Arquivo de cabeçalho responsável pelos testes de unidade da classe Quantidade.

#ifndef TESTE_QUANTIDADE_HPP_INCLUDED
#define TESTE_QUANTIDADE_HPP_INCLUDED

#include <stdexcept>     // Inclusão da biblioteca para exceções padrão (como std::invalid_argument)
#include "quantidade.hpp"  ///< Inclusão do cabeçalho da classe Quantidade para o uso de métodos e atributos nos testes.

using namespace std;     // Evita a necessidade de usar std:: antes de string, cout, etc.

/**
 * @class TUQuantidade
 * @brief Irá testar a classe Quantidade usando os métodos setQuantidade e getQuantidade e valores válidos e inválidos.
 *
 * Esta classe verifica se os valores fornecidos estão dentro dos limites permitidos.
 * Caso contrário irá enviar a mensagem de erro(FALHA).
 */

class TUQuantidade{
private:
    const static int VALOR_VALIDO = 20310;     ///< Valor considerado válido para teste de quantidade(que deve passe pela validação)
    const static int VALOR_INVALIDO = 1000001;   ///< Valor considerado inválido para teste de quantidade(que NÃO deve  passas pela validação e simlance exceção)

    Quantidade *quantidade;   ///< Ponteiro para instância da classe derivada de Dominio que será testada
    int estado;         ///< Armazena o estado do teste(SUCESSO ou FALHA) para ser retornado ao final do teste.

    void setUp();  ///@brief Prepara o ambiente de teste alocando memória para o objeto a ser testado e declassificando o estado como SUCESSO
    void tearDown();              ///@brief após o teste deleta o objeto testado e libera a memória alocada.

/**
 * @brief Executa o cenário de teste com valor válido
 * @throw std::invalid_argument Se o valor estiver fora dos limites dos cenarios de teste validos e o estado do teste recebe FALHA.
 */

void testarCenarioValorValido();

/**
 * @brief Executa o cenário de teste com valor inválido
 * @throw std::invalid_argument Se o valor estiver fora dos limites dos cenarios de teste invalidos e o estado do teste recebe FALHA.
 */

void testarCenarioValorInvalido(); ///@brief Executa o cenário de teste com valor inválido

public:
    const static int SUCESSO =  0;   ///> Constante para indicar que o teste passou
    const static int FALHA   = -1;   ///> Constante para indicar que o teste falhou

    int run();  ///> Método que executa os testes e retorna o estado final (SUCESSO ou FALHA)
};

#endif // TESTE_QUANTIDADE_HPP_INCLUDED
