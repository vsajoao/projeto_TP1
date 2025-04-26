# Projeto TP1 - Técnicas de Programação 1

Este projeto tem como objetivo a implementação de um sistema para aprendizado sobre investimentos financeiros, utilizando a linguagem C++. O sistema permite a criação e gerenciamento de contas, carteiras e ordens de investimento, seguindo uma arquitetura em camadas.

## 📌 Funcionalidades

- **Gerenciamento de conta**
  - Criar, editar, excluir e visualizar conta.
  - Autenticação via CPF e senha.

- **Gerenciamento de carteiras**
  - Criar, editar, excluir e listar carteiras associadas à conta.
  - Cada carteira tem um código, nome e perfil (Conservador, Moderado, Agressivo).

- **Gerenciamento de ordens**
  - Criar e excluir ordens de investimento.
  - Cada ordem contém um código, código de negociação, data, preço e quantidade.
  - O preço da ordem é calculado com base no preço médio do papel na data informada.
  - Ordens não podem ser editadas, apenas excluídas.

## 📂 Estrutura do Código

O projeto segue uma arquitetura em camadas, composta por:

- **Camada de apresentação**  
  Responsável pela interface com o usuário e validação dos dados de entrada.

- **Camada de serviço**  
  Contém a lógica de negócio e manipulação de dados.

- **Domínios e Entidades**  
  - **Domínios**: Classes responsáveis por representar valores, como Código, CPF, Data, Nome, Perfil, Dinheiro, Quantidade e Senha.
  - **Entidades**: Representam objetos do sistema, como Conta, Carteira e Ordem.

## 🛠️ Tecnologias e Ferramentas

- **Linguagem:** C++
- **Compilador:** GCC / Code::Blocks
- **Ferramentas de documentação:** Doxygen
- **Controle de versão:** Git e GitHub

## 📌 Requisitos

- Código deve ser compatível com Code::Blocks.
- Implementação de testes unitários para classes de domínio e entidades.
- Métodos `set` devem lançar exceções para valores inválidos.
- Classes devem ser documentadas e gerar documentação em HTML via Doxygen.

## 🚀 Como Executar

1. Clone o repositório:
   ```bash
   git clone git@github.com:vsajoao/projeto_TP1.git
   cd projeto_TP1
