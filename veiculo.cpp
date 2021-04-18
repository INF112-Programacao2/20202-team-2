#include "veiculo.h"

Veiculo::Veiculo(int id, std::string placa, int ano, std::string marca, std::string modelo, std::string cor, std::string combustivel, int preco):
    _id(id), _placa(placa), _ano(ano), _marca(marca), _modelo(modelo), _cor(cor), _combustivel(combustivel), _preco(preco) {}

int Veiculo::get_id() {
    return _id;
}

std::string Veiculo::get_placa() {
    return _placa;
}

void Veiculo::set_placa(std::string placa) {
    _placa = placa;
}

int Veiculo::get_ano() {
    return _ano;
}

void Veiculo::set_placa(int ano) {
    _ano = ano;
}

std::string Veiculo::get_marca() {
    return _marca;
}

void Veiculo::set_marca(std::string marca) {
    _marca = marca;
}

std::string Veiculo::get_modelo() {
    return _modelo;
}

void Veiculo::set_modelo(std::string modelo) {
    _modelo = modelo;
}

std::string Veiculo::get_cor() {
    return _cor;
}

void Veiculo::set_cor(std::string cor) {
    _cor = cor;
}

std::string Veiculo::get_combustivel() {
    return _combustivel;
}

void Veiculo::set_combustivel(std::string combustivel) {
    _combustivel = combustivel;
}

int Veiculo::get_preco() {
    return _preco;
}

void Veiculo::set_preco(int preco) {
    _preco = preco;
}