#include <string>

#include "vendedor.h"

Vendedor::Vendedor(int id, std::string nome, std::string cpf, std::string telefone, std::string endereco, double salario, std::string conta):
    Funcionario(id, nome, cpf, telefone, endereco, salario, conta) {}
