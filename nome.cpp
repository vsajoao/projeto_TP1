#include "nome.hpp"
#include <iostream>
#include <list>
#include <string>
using namespace std;
bool Nome::validar(string nome) {
  const int tamanho_max = 20;
  std::list<char> minhaLista;
  if (nome.length() > tamanho_max)
    return false;
  for (char c : nome) {
    if (c < '0' || c > '9') {
      if (c < 'A' || c > 'Z') {
        if (c < 'a' || c > 'z') {
          if (c != ' ') // Permitir espaço
            return false;
        }
      }
    }
    minhaLista.push_back(c); // Adiciona todos os caracteres válidos à lista (incluindo espaços)
  }

  // Para verificar o conteúdo da lista (para debug)
  std::string listaComoString;
  for (char c : minhaLista) {
    listaComoString += c;
  }

  // Correção da lógica para verificar espaços consecutivos
  int espacosConsecutivos = 0;
  for (char c : nome) {
    if (c == ' ') {
      espacosConsecutivos += 1; // Incrementa contador se encontrar espaço
    } else {
      espacosConsecutivos = 0; // Zera contador se não for espaço
    }

    if (espacosConsecutivos == 2) { // Se encontrarmos 2 espaços consecutivos
      return false;
    }
  }
  return true;
}
bool Nome::setNome(string nome) {
  if (!validar(nome))
    return false;
  this->nome = nome;
  return true;
}


