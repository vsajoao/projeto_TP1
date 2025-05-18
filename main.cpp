#include <iostream>
#include "testecodigo.hpp" // Inclua o cabeçalho do teste
#include "teste-nome.hpp"
#include "testecpf.hpp"
#include "testeCodNeg.hpp"
#include "testeconta.hpp"
#include "teste_dinheiro.hpp"
#include "testeperfil.hpp"
#include "teste_quantidade.hpp"
#include "teste_senha.hpp"
#include "testeordem.hpp"
#include "testecarteira.hpp"
using namespace std;

int main() {

    cout<<"TESTES DOMINOS:"<<endl<<endl;
    TUCodigo testeCodigo; // Cria o objeto de teste
    int resultadoCodigo = testeCodigo.run(); // Executa os testes
    cout << "RESULTADO TUCodigo: " << (resultadoCodigo == 0 ? "SUCESSO" : "FALHA") << endl<<endl;//Printa resultado

    TUNome testeNome;
    int resultadoNome = testeNome.run();
    cout << "RESULTADO TUNome: " << (resultadoNome == 0 ? "SUCESSO" : "FALHA")<< endl<< endl;


    TesteCPF testeCpf;
    int resultadoCpf = testeCpf.run();
    cout << "RESULTADO TUCPF: " << (resultadoCpf == 0 ? "SUCESSO" : "FALHA")<< endl<<endl;

    TUCodigo_de_Negociacao testeCodNeg;
    int resultadoCodNeg = testeCodNeg.run();
    cout<<"RESULTADO TUCodNeg: "<< (resultadoCodNeg == 0 ? "SUCESSO" : "FALHA")<<endl<<endl;

    TUDinheiro testeDinheiro;
    int resultadoDinheiro = testeDinheiro.run();
    cout << "RESULTADO TUDinheiro: "<<(resultadoDinheiro == 0 ? "SUCESSO" : "FALHA")<<endl<<endl;

    TestePerfil testePerfil;
    int resultadoPerfil = testePerfil.run();
    cout << "RESULTADO TUPerfil: " << (resultadoPerfil == 0 ? "SUCESSO" : "FALHA")<<endl << endl;

    TUQuantidade testeQuantidade;
    int resultadoQuantidade = testeQuantidade.run();
    cout<<"RESULTADO TUQuantidade: " << (resultadoQuantidade == 0 ? "SUCESSO" : "FALHA")<<endl<<endl;

    TUSenha testeSenha;
    int resultadoSenha = testeSenha.run();
    cout<<"RESULTADO TUSenha: " << (resultadoSenha == 0 ? "SUCESSO" : "FALHA")<<endl<<endl;

    cout<<"TESTES ENTIDADES:"<<endl<<endl;

    TesteConta testeConta;
    int resultadoConta = testeConta.run();
    cout <<"RESULTADO TUConta: "<< (resultadoConta == 0 ? "SUCESSO" : "FALHA") <<endl<<endl;

    TUCarteira testeCarteira;
    int resultadoCarteira = testeCarteira.run();
    cout<<"RESULTADO TUCarteira: " << (resultadoCarteira == 0 ? "SUCESSO" : "FALHA")<<endl<<endl;

    TesteOrdem testeOrdem;
    int resultadoOrdem = testeOrdem.run();
    cout<<"RESULTADO TUOrdem: " << (resultadoOrdem == 0 ? "SUCESSO" : "FALHA")<<endl<<endl;


    return 0;
}
