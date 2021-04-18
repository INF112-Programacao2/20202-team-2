#include "moto.h"
#include <string>

Moto::Moto(int id, std::string placa, int ano, std::string marca, std::string modelo, std::string cor, std::string combustivel, int preco, std::string tipoFreioDianteiro, std::string tipoFreioTraseiro, std::string tipoPartida, std::string injecaoEletCarb, int numCilindradas):
    Veiculo(id, placa, ano, marca, modelo, cor, combustivel, preco), _tipoFreioDianteiro(tipoFreioDianteiro), _tipoFreioTraseiro(tipoFreioTraseiro), _tipoPartida(tipoPartida), _injecaoEletCarb(injecaoEletCarb), _numCilindradas(numCilindradas) {}

std::string Moto::get_tipoFreioDianteiro() {
    return _tipoFreioDianteiro;
}

void Moto::set_tipoFreioDianteiro(std::string tipoFreioDianteiro) {
    _tipoFreioDianteiro = tipoFreioDianteiro;
}

std::string Moto::get_tipoFreioTraseiro() {
    return _tipoFreioTraseiro;
}

void Moto::set_tipoFreioTraseiro(std::string tipoFreioTraseiro) {
    _tipoFreioTraseiro = tipoFreioTraseiro;
}

std::string Moto::get_tipoPartida() {
    return _tipoPartida;
}

void Moto::set_tipoPartida(std::string tipoPartida) {
    _tipoPartida = tipoPartida;
}

std::string Moto::get_injecaoEletCarb() {
    return _injecaoEletCarb;
}

void Moto::set_injecaoEletCarb(std::string injecaoEletCarb) {
    _injecaoEletCarb = injecaoEletCarb;
}

int Moto::get_numCilindradas() {
    return _numCilindradas;
}

void Moto::set_numCilindradas(int numCilindradas) {
    _numCilindradas = numCilindradas;
}