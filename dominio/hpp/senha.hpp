/// João Vitor Frabis Zago 242039256

/// @file senha.hpp
/// @brief Declaração da classe de domínio Senha.

#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include <string>

using namespace std;

/**
 * @class Senha
 * @brief Uma conjunto ordenado de caracteres criada por um usuário que apenas o provedor de serviço e o usuário conhecem.
 *
 * Sendo usada como chave de acesso a serviços e informações, garantindo que apenas o usuário está tendo acesso.
 *
 * Classe armazena uma string de caracteres com as seguintes regras para criação da String:
 * - Seis caracteres.
 * - Cada caracter pode ser dígito (0-9), letra (A-Z ou a-z), #, $, % ou &.
 * - Não há caracter duplicado.
 * - Existe pelo menos um dígito (0-9).
 * - Existe pelo menos uma letra maiúscula (A - Z).
 * - Existe pelo menos uma letra minúscula (a - z).
 * - Existe pelo menos um caracter especial (#, $, % ou &).
 */
class Senha{
    private:
        /** @brief Valor a ser armazenado */
        string senha;

        /**
         * @brief Valida se a string atende aos requisitos segundo as regras para criação
         * @param senha A string a ser validada
         * @throws invalid_argument quando não atende a algum requisito, com especificação do requisito no valor da exceção
         */
        void validar(string senha);

    public:
        /**
         * @brief Construtor padrão da classe Senha
         */
        Senha();

        /**
         * @brief Muda a string senha, validando primeiro
         * @param senha A nova senha a ser definida
         * @throws invalid_argument se a senha não atender aos requisitos
         */
        void setSenha(string senha);

        /**
         * @brief Retorna a string senha
         * @return A senha atual como string
         */
        string getValor();
};

#endif
