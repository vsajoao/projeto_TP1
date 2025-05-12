#include <iostream>
#include "cpf.hpp"
#include "conta.hpp"
#include "senha.hpp"
#include "perfil.hpp"
#include "codigo.hpp"
#include "carteira.hpp"
using namespace std;



int main() {

  CPF cpf1;
  cpf1.setCPF("52998224725");

  Nome nome1;
  nome1.setNome("Henrique");

  Senha senha1;
  senha1.setSenha("A1$bc3");

  Perfil perfil;
  perfil.setPerfil("moderado");

  Codigo codigo;
  codigo.setCodigo("00001");

  Carteira carteira(codigo,nome1,perfil);
  carteira.setNome("joao");
  carteira.setPerfil("conservador");
  cout<<carteira.getPerfil().getValor()<< endl;


  return 0;
}
