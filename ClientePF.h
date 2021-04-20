#ifndef CLIENTEPF_H
#define CLIENTEPF_H
#include <string>
#include "Cliente.h"

using namespace std;

class ClientePF : public Cliente{
    private:
        string cpf;
        string dataNasc;
        string estadoCivil;

    public:
        void setCpf(string);
        string getCpf();
        void setDataNasc(string);
        string getDataNasc();
        void setEstadoCivil(string);
        string getEstadoCivil();
};

#endif