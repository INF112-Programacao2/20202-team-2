#include <string>

#include "carro.h"

Carro::Carro(int id, std::string placa, int ano, std::string marca, std::string modelo, std::string cor, std::string combustivel, int preco, int numPortas, bool arCondicionado, bool vidroEletrico, bool travasEletricas, std::string tipoDirecao):
    Veiculo(id, placa, ano, marca, modelo, cor, combustivel, preco), _numPortas(numPortas), _arCondicionado(arCondicionado), _vidroEletrico(vidroEletrico), _travasEletricas(travasEletricas), _tipoDirecao(tipoDirecao) {}

int Carro::get_numPortas() {
    return _numPortas;
}

void Carro::set_numPortas(int numPortas) {
    _numPortas = numPortas;
}

bool Carro::get_arCondicionado() {
    return _arCondicionado;
}

void Carro::set_arCondicionado(bool arCondicionado) {
    _arCondicionado = arCondicionado;
}

bool Carro::get_vidroEletrico() {
    return _vidroEletrico;
}

void Carro::set_vidroEletrico(bool vidroEletrico) {
    _vidroEletrico = vidroEletrico;
}

bool Carro::get_travasEletricas() {
    return _travasEletricas;
}

void Carro::set_travasEletricas(bool travasEletricas) {
    _travasEletricas = travasEletricas;
}

std::string Carro::get_tipoDirecao() {
    return _tipoDirecao;
}

void Carro::set_tipoDirecao(std::string tipoDirecao) {
    _tipoDirecao = tipoDirecao;
}