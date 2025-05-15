#include "testecpf.hpp"

void TesteCPF::setUp(){


    cpf = new CPF();
    estado = SUCESSO;
}
void TesteCPF::tearDown(){
    delete cpf;
}
void TesteCPF::testarCenarioSucesso(){
    try{
        cpf->setCPF(VALOR_VALIDO);
        if(cpf->getCPF() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TesteCPF::testarCenarioFalha(){
    try{
        cpf->setCPF(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(cpf->getCPF() == VALOR_INVALIDO)            
            estado = FALHA;
        
    }
}

int TesteCPF::run(){
    setUp();
    testarCenarioFalha();
    testarCenarioSucesso();
    tearDown();
    return estado;
}




