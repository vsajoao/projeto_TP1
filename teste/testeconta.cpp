#include "testeconta.hpp"

void TesteConta::setUp(){

    conta = new Conta();
    estado = SUCESSO;
}

void TesteConta::tearDown(){
    delete conta;
}

void TesteConta::testarCenario(){
  CPF cpf;
  cpf.setCPF(V_CPF_VALIDO);
  conta -> setCPF(cpf);
  
  if(conta->getCPF().getCPF() != V_CPF_VALIDO)
    estado = FALHA;

  /*
  Nome nome;
  nome.setNome(V_NOME_VALIDO);
  conta -> setNome(nome);

  if(conta->getNome().getNome()!= V_NOME_VALIDO)
    estado = FALHA;
  
  Senha senha;
  senha.setSenha(V_SENHA_VALIDO);
  conta -> setSenha(senha);
  
  if(conta->getSenha().getSenha() != V_SENHA_VALIDO)
    estado = FALHA;
  
   */
}

int TesteConta::run(){
  setUp();
  testarCenario();
  tearDown();
  return estado;
}

















