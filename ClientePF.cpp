#include <iostream>
#include "ClientePF.h"
#include <string>

using namespace std;

string ClientePF::getCpf(){
  return this->cpf;
}

void ClientePF::setCpf(string cpf){
  this->cpf = cpf;
}

string ClientePF::getDataNasc(){
  return this->dataNasc;
}

void ClientePF::setDataNasc(string dataNasc){
  this->dataNasc = dataNasc;
}

string ClientePF::getEstadoCivil(){
  return this->estadoCivil;
}

void ClientePF::setEstadoCivil(string estadoCivil){
  this->cpf = estadoCivil;
}
