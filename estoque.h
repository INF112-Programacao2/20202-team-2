#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <iostream>
#include <vector>

#include "veiculo.h"

class Estoque {
protected:
	int _capacidade;
	int _num_veiculos_adicionados;
	std::vector<Veiculo> _veiculos;

public:
	Estoque(int capacidade);
	
	void adicionar(Veiculo veiculo);
	void remover(Veiculo veiculo);
	void imprimir_estoque();

	int getNumVeiculos();
	int getCapacidade();
	
	void setCapacidade(int capacidade);
};

#endif