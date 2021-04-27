#include <string>

#include "moto.h"

Moto::Moto(int id, std::string placa, int ano, std::string marca, std::string modelo, std::string cor, std::string combustivel, int preco, std::string tipoFreioDianteiro, std::string tipoFreioTraseiro, std::string tipoPartida, std::string injecaoEletCarb, int numCilindradas):
    Veiculo(id, placa, ano, marca, modelo, cor, combustivel, preco), _tipoFreioDianteiro(tipoFreioDianteiro), _tipoFreioTraseiro(tipoFreioTraseiro), _tipoPartida(tipoPartida), _injecaoEletCarb(injecaoEletCarb), _numCilindradas(numCilindradas) {}

std::string Moto::getTipoFreioDianteiro() {
    return _tipoFreioDianteiro;
}

void Moto::setTipoFreioDianteiro(std::string tipoFreioDianteiro) {
    _tipoFreioDianteiro = tipoFreioDianteiro;
}

std::string Moto::getTipoFreioTraseiro() {
    return _tipoFreioTraseiro;
}

void Moto::setTipoFreioTraseiro(std::string tipoFreioTraseiro) {
    _tipoFreioTraseiro = tipoFreioTraseiro;
}

std::string Moto::getTipoPartida() {
    return _tipoPartida;
}

void Moto::setTipoPartida(std::string tipoPartida) {
    _tipoPartida = tipoPartida;
}

std::string Moto::getInjecaoEletCarb() {
    return _injecaoEletCarb;
}

void Moto::setInjecaoEletCarb(std::string injecaoEletCarb) {
    _injecaoEletCarb = injecaoEletCarb;
}

int Moto::getNumCilindradas() {
    return _numCilindradas;
}

void Moto::setNumCilindradas(int numCilindradas) {
    _numCilindradas = numCilindradas;
}