#include <iostream>
#include <string>

#include "cliente.h"
#include "clientepf.h"

ClientePF::ClientePF(int id, std::string nome, std::string telefone, std::string endereco, std::string cpf, std::string dataNascimento, std::string estadoCivil):
    Cliente(id, nome, telefone, endereco), _cpf(cpf), _dataNascimento(dataNascimento), _estadoCivil(estadoCivil) {}

std::string ClientePF::getCpf(){
    return _cpf;
}

void ClientePF::setCpf(std::string cpf){
    _cpf = cpf;
}

std::string ClientePF::getDataNascimento(){
    return _dataNascimento;
}

void ClientePF::setDataNascimento(std::string dataNascimento){
    _dataNascimento = dataNascimento;
}

std::string ClientePF::getEstadoCivil(){
    return _estadoCivil;
}

void ClientePF::setEstadoCivil(std::string estadoCivil){
    _estadoCivil = estadoCivil;
}
