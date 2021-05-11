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

void Estoque::adicionar(Veiculo *veiculo) {
	if (_num_veiculos_adicionados == _capacidade) 
		std::cout << "Estoque cheio!" << std::endl;
	else {
		_veiculos.push_back(veiculo);
		std::cout << "Veiculo adicionado com sucesso ao estoque." << std::endl;
		_num_veiculos_adicionados++;
	}
}

void Estoque::remover(Veiculo *veiculo) {
	for (int i=0; i<_num_veiculos_adicionados; i++)
	{
		if (_veiculos[i]->getId() == veiculo->getId())
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
		_veiculos[i]->exibir_informacoes();
	}
}
