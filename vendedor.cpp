#include "vendedor.h"
#include <string>

Vendedor::Vendedor(std::string id, std::string nome, std::string cpf, std::string telefone, std::string endereco, double salario, std::string conta):
    Funcionario(id, nome, cpf, telefone, endereco, salario, conta) {}
