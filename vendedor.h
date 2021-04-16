// Universidade Federal de Viçosa - Ciência da Computação
// Disciplina: INF112 - Programação II
// Autor: José Júlio Alves Campolina
// Número de Matrícula: 102022 

#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "funcionario.h"
#include <string>

class Vendedor : public Funcionario {
    public:
        Vendedor(std::string id, std::string nome, std::string cpf, std::string telefone, std::string endereco, double salario, std::string conta);
};

#endif