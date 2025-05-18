#include "teste_data.hpp" ///>Inclusão do cabeçalho da classe de teste

#include <string>
using namespace std;
#include <stdexcept>     // Inclusão da biblioteca para exceções padrão (como std::invalid_argument)

/// @brief Prepara o ambiente de teste (instancia o objeto a ser testado)
void TUData::setUp() {
    data = new Data(); ///>Cria de forma dinâmica uma nova instância da classe Data para ser testada
    estado = SUCESSO; ///>Inicializa o estado do teste como SUCESSO(padrão para o teste))
}

/// @brief Libera recursos após o teste (deleta o objeto testado)
void TUData::tearDown() {
    delete data; ///>Libera a memória alocada para o objeto Quantidade
}

/// @brief Irá testar o cenário com valor válido
void TUData::testarCenarioSucesso() {
    try {
        data->setData(VALOR_VALIDO); ///>Chama o método setData com um valor válido para testar o cenário de sucesso
        if (data->getValor() != VALOR_VALIDO) ///>Caso o valor armazenado não seja igual ao valor válido, o teste falha
            estado = FALHA; ///>Altera o estado do teste para FALHA
    } catch (invalid_argument &e) {
        estado = FALHA; ///>Caso ocorra uma exceção, o teste falha
    }
}

/// @brief Irá testar o cenário com valor inválido
void TUData::testarCenarioFalha() {
    try {
        data->setData(VALOR_INVALIDO);//>Chama o método setQuantidade com um valor inválido para testar o cenário de falha
        estado = FALHA; ///>Caso não haja exeção, o teste falha por ter algum erro 
    } catch (invalid_argument &e) {
        if (data->getValor() == VALOR_INVALIDO) ///> Caso o valor inválido seja armazenado, o teste falha
            estado = FALHA;  ///> Se o valor inválido ainda estiver armazenado, marca como falha
    }
}


/// @brief Irá iniciar os testes e retornar o estado final (SUCESSO ou FALHA)
int TUData::run() {
    setUp();///>Prepara o ambiente de teste
    testarCenarioSucesso();///>Testa o cenário com valor válido
    testarCenarioFalha();///>Testa o cenário com valor inválido
    tearDown();///>Libera recursos após o teste
    return estado;///>retorna o estado final do teste (SUCESSO ou FALHA)
}