#include "cpf.hpp"
#include <cctype>
#include <iostream>
#include <stdexcept>
using namespace std;

// verifica se todos os caracteres são digitos e salva eles em uma array de
// inteiros string valor -> somente numeros. array de inteiros com 11 digitos do
// cpf retorna true se todos os caracteres forem digitos
bool CPF::cpf_array(string valor, int *array) {

  // verifica se todos os caracteres são digitos e copiaos para array
  for (int i = 0; i < 11; i++) {
    if (isdigit(valor[i]))
      array[i] = valor[i] - '0';

    else {
      cout << "CPF erro no digito" << endl;
      return false;
    }
  }
  return true;
}

// verifica se os digitos verificadores são validos
// array de inteiros com 11 digitos do cpf
// retorna true se os digitos verificadores forem validos
bool CPF::validarNumerosCPF(int *array) {

  int x1, x2;
  x1 = 0;
  x2 = 0;

  // calcula o primeiro digito verificador
  for (int i = 0; i < 9; i++)
    x1 += (10 - i) * array[i];
  x1 = x1 % 11;
  if (x1 < 2)
    x1 = 0;
  else
    x1 = 11 - x1;

  // verifica o primeiro digito verificador é compativel com o numero do cpf
  if (x1 != array[9]) {
    cout << "CPF verificador 1 erro" << endl;
    return false;
  }

  // calcula o segundo digito verificador
  for (int i = 0; i < 10; i++)
    x2 += (11 - i) * array[i];
  x2 = x2 % 11;
  if (x2 < 2)
    x2 = 0;
  else
    x2 = 11 - x2;

  // verifica o segundo digito verificador é compativel com o numero do cpf
  if (x2 != array[10]) {
    cout << "CPF verificador 2 erro" << endl;
    return false;
  }
  
  return true;
}

// verifica se todos os digitos são iguais
// array de inteiros com 11 digitos do cpf
// retorna true se os digitos não forem todos iguais
bool CPF::numerosIguais(int *array) {
  for (int i = 1; i < 9; i++)
    if (array[i - 1] != array[i])
      return true;
  cout << "CPF digitos iguais" << endl;
  return false;
}

// verifica se o cpf é valido(11digitos, digitos não todos iguais, digitos
// verificadores corretos) string valor se o cpf for valido retorna true
void CPF::validarCPF(string valor) {
  // verifica se o cpf tem 11 digitos
  if (valor.length() != 11)
    throw invalid_argument("CPF tamanho invalido");

  // verifica se todos os caracteres são digitos e copiaos para array
  if (!cpf_array(valor, this->array_cpf))
    throw invalid_argument("CPF erro caractere não digito ");

  // verifica se todos os digitos são iguais
  if (!numerosIguais(this->array_cpf))
    throw invalid_argument("CPF todos digitos iguais");

  // verifica se os digitos verificadores são validos
  if (!validarNumerosCPF(this->array_cpf))
    throw invalid_argument("CPF digitos verificadores invalidos");

  
  
}

// seta o cpf
// string valor -> somente numeros
// retorna false se o cpf for invalido
void CPF::setCPF(string valor) {
  validarCPF(valor);  // vai lançar exceção se CPF for inválido
  this->numero_cpf = valor;

}

