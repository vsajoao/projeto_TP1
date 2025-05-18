// Henrique França 242039130
#include "testeordem.hpp"

void TesteOrdem::setUp(){

    ordem = new Ordem();
    estado = SUCESSO;
}

void TesteOrdem::tearDown(){
    delete ordem;
}

void TesteOrdem::testarCenario(){
  Data data;
  data.setData(V_DATA_VALIDO);
  ordem -> setData(data);

      if(ordem->getData().getValor() != V_DATA_VALIDO)
    estado = FALHA;



    Quantidade quantidade;
    quantidade.setQuantidade(V_QUANTIDADE_VALIDO);
    ordem -> setQuantidade(quantidade);

    if(ordem->getQuantidade().getQuantidade() != V_QUANTIDADE_VALIDO)
      estado = FALHA;



    Dinheiro dinheiro;
    dinheiro.setDinheiro(V_DINHEIRO_VALIDO);
    ordem -> setPreco(dinheiro);

    if(ordem->getDinheiro().getDinheiro() != V_DINHEIRO_VALIDO)
      estado = FALHA;



    Codigo codigo;
    codigo.setCodigo(V_CODIGO_VALIDO);
    ordem -> setCodigo(codigo);

    if(ordem->getCodigoCarteira().getValor() != V_CODIGO_VALIDO)
      estado = FALHA;


   
    Codigo_de_Negociacao c_neg;
    c_neg.setCodigoDeNegociacao(V_C_NEGOCIACAO_VALIDO);
    ordem -> setCodNegociacao(c_neg);

    if(ordem->getCodNegociacao().getValor() != V_C_NEGOCIACAO_VALIDO)
      estado = FALHA;

  

}

int TesteOrdem::run(){
  setUp();
  testarCenario();
  tearDown();
  return estado;
}

















