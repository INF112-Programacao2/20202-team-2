#include <iostream>
#include "ClientePJ.h"
#include <string>

using namespace std;

string ClientePJ::getCnpj(){
  return this->cnpj;
}

void ClientePJ::setCnpj(string cnpj){
  this->cnpj = cnpj;
}
