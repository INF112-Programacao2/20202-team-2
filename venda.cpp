#include "venda.h"

Venda::Venda(Funcionario *funcionario_responsavel, Cliente *cliente_atendido, Veiculo *veiculo_vendido, std::string data, double desconto, std::string forma_pagamento, double valor_final, std::string obs){
	_funcionario_responsavel = funcionario_responsavel;
	_cliente_atendido = cliente_atendido;
	_veiculo_vendido = veiculo_vendido;
	_data = data;
	_desconto = desconto;
	_forma_pagamento = forma_pagamento;
	_valor_final = valor_final; 
	_obs = obs;
}

Funcionario* Venda::get_funcionario(){
	return _funcionario_responsavel;
}

Cliente* Venda::get_cliente(){
	return _cliente_atendido;
}

Veiculo* Venda::get_veiculo_vendido(){
	return _veiculo_vendido;
}

std::string Venda::get_data(){
	return _data;
}

double Venda::get_desconto(){
	return _desconto;
}

std::string Venda::get_forma_pagamento(){
	return _forma_pagamento;
}

double Venda::get_valor_final(){
	return _valor_final;
}

void Venda::set_funcionario(Funcionario *f){
	_funcionario_responsavel = f;
}

void Venda::set_cliente(Cliente *c){
	_cliente_atendido = c;
}

void Venda::set_veiculo_vendido(Veiculo *v){
	_veiculo_vendido = v;
}

void Venda::set_data(std::string d){
	_data = d;
}

void Venda::set_desconto(double desc){
	_desconto = desc;
}

void Venda::set_forma_pagamento(std::string forma_pg){
	_forma_pagamento = forma_pg;
}

void Venda::set_valor_final(double valor){
	_valor_final = valor;
}

void Venda::set_obs(std::string o){
	_obs = o;
}