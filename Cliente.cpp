#include <iostream>
#include "Cliente.h"
#include <string>

using namespace std;

int Cliente::getId(){
  return this->id;
}

void Cliente::setId(int id){
  this->id = id;
}

string Cliente::getNome(){
  return this->nome;
}

void Cliente::setNome(string nome){
  this->nome = nome;
}

string Cliente::getTelefone(){
  return this->telefone;
}

void Cliente::setTelefone(string telefone){
  this->telefone = telefone;
}

string Cliente::getEndereco(){
  return this->endereco;
}

void Cliente::setEndereco(string endereco){
  this->endereco = endereco;
}