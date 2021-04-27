#include <iostream>
#include <string>

#include "clientepf.h"

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
