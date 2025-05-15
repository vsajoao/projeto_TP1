// Henrique França 242039130
#ifndef CPF_HPP_INCLUDED
#define CPF_HPP_INCLUDED
#include <string>
using namespace std;

/**
 * @file CPF.hpp
 * @brief Declaração da classe CPF responsável por armazenar e validar um número de CPF, um número único usado para identificar cada cidadão.
 * 
 * A classe fornece métodos para validar o formato do CPF, atribuí‑lo ao objeto
 * e obter o valor armazenado. A validação segue as regras de dígitos verificadores
 * oficiais, além de rejeitar CPFs com todos os dígitos iguais.
 */

class CPF {

    private:
        /**
         * @brief String contendo o CPF já formatado e validado (somente dígitos).
         */
        string numero_cpf;

        /**
         * @brief Vetor interno de 11 posições utilizado no cálculo dos dígitos verificadores.
         */
        int array_cpf[11] = {0,0,0,0,0,0,0,0,0,0,0};

        /**
         * @brief Converte uma string de dígitos para o vetor @c array_cpf.
         * 
         * @param cpf_str String contendo 11 dígitos do CPF (sem pontuação).
         * @param dest    Vetor de 11 posições onde os dígitos serão armazenados.
         * @return true   Se a string possui 11 dígitos numéricos e a cópia foi feita.
         * @return false  Caso contrário.
         */
        bool cpf_array(string, int[]);

        /**
         * @brief Valida os dígitos verificadores de um CPF armazenado em @c array_cpf.
         * 
         * @param digitos Vetor de 11 dígitos.
         * @return true   Se os dois dígitos verificadores estiverem corretos.
         * @return false  Caso contrário.
         */
        bool validarNumerosCPF(int[]);

        /**
         * @brief Verifica se todos os dígitos do CPF são iguais (ex.: 111.111.111‑11), o que é inválido.
         * 
         * @param digitos Vetor de 11 dígitos.
         * @return true   Se todos forem iguais (CPF inválido).
         * @return false  Caso contrário.
         */
        bool numerosIguais(int[]);
    
    public:

        /**
         * @brief Valida um CPF em formato string e, se for válido, armazena‑o no objeto.
         * 
         * Este método chama internamente @c cpf_array, @c numerosIguais e
         * @c validarNumerosCPF. Caso o CPF seja inválido, recomenda‑se lançar
         * uma exceção ou sinalizar erro.
         * 
         * @param cpf String com 11 dígitos (apenas números). Pontos ou traços devem ser removidos antes.
         * @throw std::invalid_argument Se o CPF for inválido.
         */
        void validarCPF(string);

        /**
         * @brief Define diretamente o número de CPF sem validar.
         * 
         * Use quando já tiver certeza da validade ou quando o CPF foi
         * previamente verificado por @c validarCPF.
         * 
         * @param cpf String de 11 dígitos a ser armazenada.
         */
        void setCPF(string);

        /**
         * @brief Retorna o CPF armazenado no objeto.
         * 
         * @return std::string CPF com 11 dígitos (sem pontuação).
         */
        string getCPF();
    };

inline string CPF::getCPF(){
    return numero_cpf;
}

#endif 
