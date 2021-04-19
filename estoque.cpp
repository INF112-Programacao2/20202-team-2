#include "estoque.h"

Estoque::Estoque (int capacidade) {
    
	_capacidade = capacidade;
	_num_veiculos_adicionados = 0;
}

void Estoque::adicionar(Veiculo veiculo) {
	if (_num_veiculos_adicionados == _capacidade) 
		std::cout << "Estoque cheio!" << std::endl;
	else {
		_veiculos.push_back(veiculo);
		std::cout << "Veiculo adicionado com sucesso ao estoque." << std::endl;
		_num_veiculos_adicionados++;
	}
}

void Estoque::remover(Veiculo veiculo) {
	for (int i=0; i<_num_veiculos_adicionados; i++)
	{
		if (_veiculos[i].get_id() == veiculo.get_id())
		{
			_veiculos.erase(_veiculos.begin()+i);
			std::cout << "Veiculo removido com sucesso." << std::endl;
			_num_veiculos_adicionados--;
			break;
		}
		if (i==_num_veiculos_adicionados-1)
			std::cout << "Este veiculo nao esta no estoque." << std::endl;
	}
}

int Estoque::get_num_veiculos(){
	return _num_veiculos_adicionados;
}

int Estoque::get_capacidade(){
	return _capacidade;
}

void Estoque::set_capacidade(int cap){
	_capacidade = cap;
}

void Estoque::imprimir_estoque() {
	for (int i=0; i<_num_veiculos_adicionados; i++)
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "ID: " << _veiculos[i].get_id() << std::endl;
		std::cout << "Placa: " << _veiculos[i].get_placa() << std::endl;
		std::cout << "Ano: " << _veiculos[i].get_ano() << std::endl;
		std::cout << "Marca: " << _veiculos[i].get_marca() << std::endl;
		std::cout << "Modelo: " << _veiculos[i].get_modelo() << std::endl;
		std::cout << "Cor: " << _veiculos[i].get_cor() << std::endl;
		std::cout << "Tipo de combustivel: " << _veiculos[i].get_combustivel() << std::endl;
		std::cout << "Preco: " << _veiculos[i].get_preco() << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
	}
	
}
