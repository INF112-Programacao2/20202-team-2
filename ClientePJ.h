#ifndef CLIENTEPJ_H
#define CLIENTEPJ_H

#include <string>

#include "cliente.h"

class ClientePJ : public Cliente{
    private:
        std::string _cnpj;

    public:
        std::string getCnpj();

        void setCnpj(std::string cnpj);
};

#endif