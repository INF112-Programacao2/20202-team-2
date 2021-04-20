#ifndef CLIENTEPJ_H
#define CLIENTEPJ_H
#include <string>
#include "Cliente.h"

using namespace std;

class ClientePJ : public Cliente{
    private:
        string cnpj;

    public:
        void setCnpj(string);
        string getCnpj();
};

#endif