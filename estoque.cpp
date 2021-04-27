#include "estoque.h"

Estoque::Estoque (int capacidade) {
    
	_capacidade = capacidade;
	_num_veiculos_adicionados = 0;
}

int Estoque::getNumVeiculos(){
	return _num_veiculos_adicionados;
}

int Estoque::getCapacidade(){
	return _capacidade;
}

void Estoque::setCapacidade(int cap){
	_capacidade = cap;
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
		if (_veiculos[i].getId() == veiculo.getId())
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

void Estoque::imprimir_estoque() {
	for (int i=0; i<_num_veiculos_adicionados; i++)
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "ID: " << _veiculos[i].getId() << std::endl;
		std::cout << "Placa: " << _veiculos[i].getPlaca() << std::endl;
		std::cout << "Ano: " << _veiculos[i].getAno() << std::endl;
		std::cout << "Marca: " << _veiculos[i].getMarca() << std::endl;
		std::cout << "Modelo: " << _veiculos[i].getModelo() << std::endl;
		std::cout << "Cor: " << _veiculos[i].getCor() << std::endl;
		std::cout << "Tipo de combustivel: " << _veiculos[i].getCombustivel() << std::endl;
		std::cout << "Preco: " << _veiculos[i].getPreco() << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
	}
	
}
