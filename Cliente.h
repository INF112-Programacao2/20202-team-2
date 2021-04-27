#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
    protected:
        int _id;
        std::string _nome;
        std::string _telefone;
        std::string _endereco;

    public:
        int getId();
        std::string getNome();
        std::string getTelefone();
        std::string getEndereco();
        
        void setId(int id);
        void setNome(std::string nome);
        void setTelefone(std::string telefone);
        void setEndereco(std::string endereco);
};

#endif