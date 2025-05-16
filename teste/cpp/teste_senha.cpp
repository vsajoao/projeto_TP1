/// João Vitor Frabis Zago 242039256

#include "teste_senha.hpp"

void TUSenha::setUp(){


    senha = new Senha();
    estado = SUCESSO;
}
void TUSenha::tearDown(){
    delete senha;
}
void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if(senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(senha->getValor() == VALOR_INVALIDO)            
            estado = FALHA;
        
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioFalha();
    testarCenarioSucesso();
    tearDown();
    return estado;
}