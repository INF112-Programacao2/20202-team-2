#ifndef VEICULO_H
#define VEICULO_H

#include <string>

class Veiculo {
    protected:
        int _id;
        std::string _placa;
        int _ano;
        std::string _marca;
        std::string _modelo;
        std::string _cor;
        std::string _combustivel;
        int _preco;
    public:
        Veiculo(int id, std::string placa, int ano, std::string marca, std::string modelo, std::string cor, std::string combustivel, int preco);
        
        int get_id();
        std::string get_placa();
        int get_ano();
        std::string get_marca();
        std::string get_modelo();
        std::string get_cor();
        std::string get_combustivel();
        int get_preco();

        void set_placa(std::string placa);
        void set_ano(int ano);
        void set_marca(std::string marca);
        void set_modelo(std::string modelo);
        void set_cor(std::string cor);
        void set_combustivel(std::string combustivel);
        void set_preco(int preco);
};

#endif