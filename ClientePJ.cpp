#include <iostream>
#include <string>

#include "cliente.h"
#include "clientepj.h"

ClientePJ::ClientePJ(int id, std::string nome, std::string telefone, std::string endereco, std::string cnpj):
  	Cliente(id, nome, telefone, endereco), _cnpj(cnpj) {}

std::string ClientePJ::getCnpj(){
    return _cnpj;
}

void ClientePJ::setCnpj(std::string cnpj){
  	_cnpj = cnpj;
}
