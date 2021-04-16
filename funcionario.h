#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

// #include "funcionarioIF.h"
#include <string>

// class Produto: public ProdutoIF {
class Funcionario {
    protected:
        std::string _id;
        std::string _nome;
        std::string _cpf;
        std::string _telefone;
        std::string _endereco;
        double _salario;
        std::string _conta;
    public:
        Funcionario(std::string id, std::string nome, std::string cpf, std::string telefone, std::string endereco, double salario, std::string conta);
        
        std::string get_id();
        std::string get_nome();
        std::string get_cpf();
        std::string get_telefone();
        std::string get_endereco();
        double get_salario();
        std::string get_conta();

        void set_nome(std::string nome);
        void set_cpf(std::string cpf);
        void set_telefone(std::string telefone);
        void set_endereco(std::string endereco);
        void set_salario(double salario);
        void set_conta(std::string conta);
};

#endif