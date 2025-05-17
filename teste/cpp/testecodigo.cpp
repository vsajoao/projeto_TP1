#include "testecodigo.hpp" 

#include <string>
using namespace std;

// Inicialização dos membros estáticos da classe TUCodigo
const string TUCodigo::VALOR_VALIDO = "12345";
const string TUCodigo::VALOR_INVALIDO = "1234567";

void TUCodigo::setUp() {
    codigo = new Codigo(); 
    estado = SUCESSO; 
}

void TUCodigo::tearDown() {
    delete codigo; 
}


void TUCodigo::testarCenarioValorValido() {
    try {
        codigo->setCodigo(VALOR_VALIDO); 
        
        if (codigo->getValor() != VALOR_VALIDO) 
            
            estado = FALHA; 
    } catch (invalid_argument &e) {
        estado = FALHA; 
    }
}

void TUCodigo::testarCenarioValorInvalido() {
    try {
       codigo->setCodigo(VALOR_INVALIDO);
        
        estado = FALHA; 
    } catch (invalid_argument &e) {
        if (codigo->getValor() == VALOR_INVALIDO) 
            estado = FALHA;  
    }
}

int TUCodigo::run() {
    setUp();///>Prepara o ambiente de teste
    testarCenarioValorValido();///>Testa o cenário com valor válido
    testarCenarioValorInvalido();///>Testa o cenário com valor inválido
    tearDown();///>Libera recursos após o teste
    return estado;///>retorna o estado final do teste (SUCESSO ou FALHA)
}