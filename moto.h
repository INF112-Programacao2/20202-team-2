#ifndef MOTO_H
#define MOTO_H

#include "veiculo.h"
#include <string>

class Moto : public Veiculo {
	protected:
        std::string _tipoFreioDianteiro;
        std::string _tipoFreioTraseiro;
        std::string _tipoPartida;
        std::string _injecaoEletCarb;
        int _numCilindradas;
    public:
        Moto(int id, std::string placa, int ano, std::string marca, std::string modelo, std::string cor, std::string combustivel, int preco, std::string tipoFreioDianteiro, std::string tipoFreioTraseiro, std::string tipoPartida, std::string injecaoEletCarb, int numCilindradas);

        std::string get_tipoFreioDianteiro();
        std::string get_tipoFreioTraseiro();
        std::string get_tipoPartida();
        std::string get_injecaoEletCarb();
        int get_numCilindradas();

        void set_tipoFreioDianteiro(std::string tipoFreioDianteiro);
        void set_tipoFreioTraseiro(std::string tipoFreioTraseiro);
        void set_tipoPartida(std::string tipoPartida);
        void set_injecaoEletCarb(std::string injecaoEletCarb);
        void set_numCilindradas(int numCilindradas);
};

#endif