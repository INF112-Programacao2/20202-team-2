#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using namespace std;

class Cliente{
    protected:
        int id;
        string nome;
        string telefone;
        string endereco;

    public:
        void setNome(string);
        string getNome();
        void setId(int);
        int getId();
        void setTelefone(string);
        string getTelefone();
        void setEndereco(string);
        string getEndereco();
};

#endif