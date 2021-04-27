#include <iostream>
#include <string>

#include "clientepj.h"

std::string ClientePJ::getCnpj(){
  return _cnpj;
}

void ClientePJ::setCnpj(std::string cnpj){
  _cnpj = cnpj;
}
