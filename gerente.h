#ifndef GERENTE_H
#define GERENTE_H

#include "funcionario.h"
#include <string>

class Gerente : public Funcionario {
    public:
        Gerente(int id, std::string nome, std::string cpf, std::string telefone, std::string endereco, double salario, std::string conta);
};

#endif