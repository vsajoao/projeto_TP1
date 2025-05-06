#include <iostream>
#include "cpf.hpp"
#include "conta.hpp"
using namespace std;



int main() { 

  CPF cpf1;
  cpf1.setCPF("52998224725");

  Nome nome1;
  nome1.setNome("Henrique"); 

  Senha senha1;
  senha1.setSenha("A1$bc3");
  
  Conta c1(cpf1, nome1, senha1);
  cout << c1.getCPF() << endl;
  cout << c1.getNome() << endl;
  cout << c1.getSenha() << endl;



  
  c1.setCPF("11111111111");
  c1.setNome("Leo 98");
  cout << c1.getCPF() <<" "<< c1.getNome()<< endl;


  return 0;
}