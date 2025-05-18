/// João Vitor Frabis Zago 242039256

#include "testeCodNeg.hpp"

void TUCodigo_de_Negociacao::setUp(){


    codigo_de_negociacao = new Codigo_de_Negociacao();
    estado = SUCESSO;
}
void TUCodigo_de_Negociacao::tearDown(){
    delete codigo_de_negociacao;
}
void TUCodigo_de_Negociacao::testarCenarioSucesso(){
    try{
        codigo_de_negociacao->setCodigoDeNegociacao(VALOR_VALIDO);
        if(codigo_de_negociacao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigo_de_Negociacao::testarCenarioFalha(){
    try{
        codigo_de_negociacao->setCodigoDeNegociacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(codigo_de_negociacao->getValor() == VALOR_INVALIDO)
            estado = FALHA;

    }
}

int TUCodigo_de_Negociacao::run(){
    setUp();
    testarCenarioFalha();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
