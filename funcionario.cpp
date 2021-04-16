#include "funcionario.h"

Funcionario::Funcionario(int id, std::string nome, std::string cpf, std::string telefone, std::string endereco, double salario, std::string conta):
    _id(id), _nome(nome), _cpf(cpf), _telefone(telefone), _endereco(endereco), _salario(salario), _conta(conta) {}

int Funcionario::get_id() {
    return _id;
}

std::string Funcionario::get_nome() {
    return _nome;
}

void Funcionario::set_nome(std::string nome) {
    _nome = nome;
}

std::string Funcionario::get_cpf() {
    return _cpf;
}

void Funcionario::set_cpf(std::string cpf) {
    _cpf = cpf;
}

std::string Funcionario::get_telefone() {
    return _telefone;
}

void Funcionario::set_telefone(std::string telefone) {
    _telefone = telefone;
}

std::string Funcionario::get_endereco() {
    return _endereco;
}

void Funcionario::set_endereco(std::string endereco) {
    _endereco = endereco;
}

double Funcionario::get_salario() {
    return _salario;
}

void Funcionario::set_salario(double salario) {
    _salario = salario;
}

std::string Funcionario::get_conta() {
    return _conta;
}

void Funcionario::set_conta(std::string conta) {
    _conta = conta;
}

