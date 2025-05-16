#ifndef TESTE_DINHEIRO_HPP_INCLUDED
#define TESTE_DINHEIRO_HPP_INCLUDED

#include <stdexcept>     // Inclusão da biblioteca para exceções padrão (como std::invalid_argument)
#include "dinheiro.hpp"  // Inclusão do cabeçalho da classe Dinheiro

using namespace std;     // Evita a necessidade de usar std:: antes de string, cout, etc.

/**
 * 
 */
class TUDinheiro{
private:

    constexpr static float VALOR_VALIDO = 3461.00f;     // Valor considerado válido para teste (que deve passe pela validação)
    constexpr static float VALOR_INVALIDO = 1000000.04f;   // Valor considerado inválido para teste (que NÃO deve  passas pela validação e simlance exceção)

    Dinheiro *dinheiro;   // Ponteiro para instância da classe derivada de Dominio que será testada
    int estado;         // Armazena o estado do teste: SUCESSO ou FALHA

    void setUp();                 // Prepara o ambiente de teste (instancia o objeto a ser testado)
    void tearDown();              // Libera recursos após o teste (deleta o objeto testado)
    void testarCenarioValorValido();   // Executa o cenário de teste com valor válido
    void testarCenarioValorInvalido(); // Executa o cenário de teste com valor inválido

public:
    const static int SUCESSO =  0;   // Constante para indicar que o teste passou
    const static int FALHA   = -1;   // Constante para indicar que o teste falhou

    int run();  // Método que executa os testes e retorna o estado final (SUCESSO ou FALHA)
};

#endif // TESTE_DINHEIRO_HPP_INCLUDED
