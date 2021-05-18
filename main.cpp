#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "funcionario.h"
#include "gerente.h"
#include "vendedor.h"
#include "veiculo.h"
#include "carro.h"
#include "moto.h"
#include "estoque.h"
#include "venda.h"
#include "cliente.h"
#include "ClientePF.h"
#include "ClientePJ.h"

int input_menu() {
    int x = -1;
    while(x <= 0 || x > 4){
            std::cin >> x;

            if(!std::cin || x < 0 || x > 100)
                return 0;

            return x;
    }

    return 0;
}


int main() {

    Estoque estoque;
    Veiculo *v1 = new Carro(000,"HFG-3983", 2017, "Fiat", "Argo 1.0", "Vermelho", "Flex", 39990, 4, true, true, true, "Hidráulica");
    Veiculo *v2 = new Carro(001,"GWS-9104", 2014, "Chevrolet", "Onix 1.4", "Chumbo,", "Flex", 35490, 4, true, true, true, "Hidráulica");
    Veiculo *v3 = new Moto(002, "OFK-2981", 2018, "Honda", "Bros", "Preto", "Flex", 12000, "A disco", "A disco", "Elétrica", "Eletrônica", 160);
    Veiculo *v4 = new Moto(003, "HPW-3489", 2019, "Honda", "Titan", "Vermelho", "Flex", 12500, "A disco", "A disco", "Elétrica", "Eletrônica", 160);

    estoque.adicionar(v1, 1);
    estoque.adicionar(v2, 1);
    estoque.adicionar(v3, 1);
    estoque.adicionar(v4, 1);

    Funcionario *f = new Vendedor(001, "João Carlos", "045.574.329-45", "(31) 95234-1485", "Av. PH Rolfs, 1023", 2200, "0415234-4");
    Cliente *c = new ClientePF(001, "Márcio Correa", "(31) 99745-3710", "Rua dos Estudantes, 290", "026.347.601-63", "20/08/1995", "Solteiro");
    Venda venda1(f,c,v1,"14/05/2021",0,"Cartão de Crédito", 39990,"Nenhuma");
    Venda venda2(f,c,v4,"14/05/2021",0,"Cartão de Crédito", v4->getPreco(),"Nenhuma");

    venda1.salvar_venda();
    venda2.salvar_venda();

    delete v1;
    delete v2;
    delete v3;
    delete v4;
    delete f;
    delete c;

    std::vector<Funcionario> funcionarios;
    std::vector<Gerente> gerentes;
    std::vector<Vendedor> vendedores;

    std::cout << "Sistema de Concessionária" << std::endl;
    int menu_principal;
    int menu_interno;
    int id;

    do {
        std::cout << std::endl << "===Menu Principal===" << std::endl;
        std::cout << "1 - Gerenciar Funcionários" << std::endl;
        std::cout << "2 - Gerenciar Clientes" << std::endl;
        std::cout << "3 - Gerenciar Estoque" << std::endl;
        std::cout << "4 - Gerenciar Vendas" << std::endl;
        std::cout << "0 - Sair" << std::endl;

        std::cout << std::endl << "Insira uma opção: ";
        menu_principal = input_menu();

        switch (menu_principal) {
		case 1:
            do {
                std::cout << std::endl << "===Gerenciar Funcionários===" << std::endl;
                std::cout << "1 - Cadastrar Funcionário" << std::endl;
                std::cout << "2 - Listar Funcionários" << std::endl;
                std::cout << "3 - Buscar Funcionário" << std::endl;
                std::cout << "4 - Excluir Funcionário" << std::endl;
                std::cout << "0 - Voltar" << std::endl;

                std::cout << std::endl << "Insira uma opção: ";
                menu_interno = input_menu();

                switch (menu_interno) {
                case 1: {
                    std::cout << std::endl << "===Cadastrar Funcionário===" << std::endl;
                    try {
                        int tipo; // 0 - gerente || 1 - vendedor
                        int id = funcionarios.size() + 1;

                        std::string nome;
                        std::cout << "Insira o nome: ";
                        std::cin.ignore();
                        std::getline(std::cin, nome);

                        std::string cpf;
                        std::cout << "Insira o cpf: ";
                        std::cin >> cpf;

                        std::string telefone;
                        std::cout << "Insira o telefone (sem espaços): ";
                        std::cin >> telefone; 

                        std::string endereco;
                        std::cout << "Insira o endereço: ";
                        std::cin.ignore();
                        std::getline(std::cin, endereco);

                        double salario;
                        std::cout << "Insira o salário: ";
                        std::cin >> salario;

                        std::string conta; 
                        std::cout << "Insira a conta: ";
                        std::cin.ignore();
                        std::getline(std::cin, conta);

                        std::cout << "Insira o tipo (0 - Gerente, 1 - vendedor): ";
                        std::cin >> tipo;

                        if(tipo == 0){
                            Gerente f(id, nome, cpf, telefone, endereco, salario, conta);
                            gerentes.push_back(f);
                            funcionarios.push_back(f);
                        } else if (tipo == 1){
                            Vendedor f(id, nome, cpf, telefone, endereco, salario, conta);
                            vendedores.push_back(f);
                            funcionarios.push_back(f);
                        } else {
                            throw std::exception();
                        } 
                    } catch (std::exception &e){
                        std::cout << "Ocorreu um erro ao cadastrar funcionário: " << std::endl;
                    }
                }
                    break;
                case 2:
                    std::cout << std::endl << "===Listar Funcionários===" << std::endl;
                    try{
                        for(Funcionario funcionario:funcionarios){
                            std::cout << "ID: " << funcionario.getId() << std::endl;
                            std::cout << "NOME: " << funcionario.getNome() << std::endl;
                            std::cout << "CPF: " << funcionario.getCpf() << std::endl;
                            std::cout << "TELEFONE: " << funcionario.getTelefone() << std::endl;
                            std::cout << "ENDEREÇO: " << funcionario.getEndereco() << std::endl;
                            std::cout << "SALÁRIO: " << funcionario.getSalario() << std::endl;
                            std::cout << "CONTA: " << funcionario.getConta() << std::endl;
                            std::cout << (funcionarios.size() > 1 ? "---------------------------" : "") << std::endl;
                        }
                    } catch (std::exception &e){
                        std::cout << "Ocorreu um erro ao listar funcionário: " << std::endl;
                    }
                    break;
                case 3:
                    std::cout << std::endl << "===Buscar Funcionário===" << std::endl;
                    try {

                        std::cout << "Informe o id do Funcionário: ";
                        std::cin >> id;
                        std::cout << "NOME: " << funcionarios[id-1].getNome() << std::endl;
                        std::cout << "CPF: " << funcionarios[id-1].getCpf() << std::endl;
                        std::cout << "TELEFONE: " << funcionarios[id-1].getTelefone() << std::endl;
                        std::cout << "ENDEREÇO: " << funcionarios[id-1].getEndereco() << std::endl;
                        std::cout << "SALÁRIO: " << funcionarios[id-1].getSalario() << std::endl;
                        std::cout << "CONTA: " << funcionarios[id-1].getConta() << std::endl;
                    } catch (std::exception &e){
                        std::cout << "Ocorreu um erro ao buscar funcionário: " << std::endl;
                    }
                    break;
                case 4:
                    std::cout << std::endl << "===Excluir Funcionário===" << std::endl;
                    try{
                        std:: cout << "Informe o id do Funcionário: ";
                        std::cin >> id;
                        if((funcionarios.begin() + id) < funcionarios.end()){
                            funcionarios.erase(funcionarios.begin() + id);
                            std:: cout << "Funcionário excluído com sucesso!" << std::endl;
                        } else {
                            throw std::exception();
                        }
                    } catch (std::exception &e){
                        std::cout << "Ocorreu um erro ao excluir funcionário: " << std::endl;
                    }
                    break;
                case 0:
                    break;
                default:
                    std::cout << "Opção inválida!" << std::endl;
                    break;
                }
            } while (menu_interno != 0);
            break;
		case 2:
			do {
                std::cout << std::endl << "===Gerenciar Clientes===" << std::endl;
                std::cout << "1 - Cadastrar Cliente" << std::endl;
                std::cout << "2 - Listar Clientes" << std::endl;
                std::cout << "3 - Buscar Cliente" << std::endl;
                std::cout << "4 - Excluir Cliente" << std::endl;
                std::cout << "0 - Voltar" << std::endl;

                std::cout << std::endl << "Insira uma opção: ";
                menu_interno = input_menu();

                switch (menu_interno) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 0:
                    break;
                default:
                    std::cout << "Opção inválida!" << std::endl;
                    break;
                }
            } while (menu_interno != 0);
            break;
        case 3:
			do {
                std::cout << std::endl << "===Gerenciar Estoque===" << std::endl;
                std::cout << "1 - Adicionar Veículo" << std::endl;
                std::cout << "2 - Exibir Estoque" << std::endl;
                std::cout << "3 - Buscar Veículo" << std::endl;
                std::cout << "4 - Remover Veículo" << std::endl;
                std::cout << "0 - Voltar" << std::endl;

                std::cout << std::endl << "Insira uma opção: ";
                menu_interno = input_menu();

                switch (menu_interno) {
                case 1:
                    std::cout << "Carro (0) ou Moto (1)?" << std::endl;
                    int tipo;
                    std::cin >> tipo;
                    if (tipo == 0)
                    {
                        int id, ano, preco, nportas, quantidade;
                        std::string placa, marca, modelo, cor, combustivel, tdirecao;
                        bool ac,ve,te;

                        id = estoque.getNumVeiculos();
                        std::cout << "Quantidade: ";
                        std::cin >> quantidade;
                        std::cout << "Ano: ";
                        std::cin >> ano;
                        std::cout << "Preço: ";
                        std::cin >> preco;
                        std::cout << "Marca: ";
                        std::cin >> marca;
                        std::cout << "Modelo: ";
                        std::cin >> modelo;
                        std::cout << "Número de portas: ";
                        std::cin >> nportas;
                        std::cout << "Cor: ";
                        std::cin >> cor;
                        std::cout << "Placa: ";
                        std::cin >> placa;
                        std::cout << "Combustível: ";
                        std::cin >> combustivel;
                        std::cout << "Tipo de direção: ";
                        std::cin >> tdirecao;
                        std::cout << "Ar condicionado?(0/1): ";
                        std::cin >> ac;
                        std::cout << "Travas elétricas? (0/1): ";
                        std::cin >> te;
                        std::cout << "Vidros elétricos? (0/1): ";
                        std::cin >> ve;
                        
                        Veiculo *v = new Carro(id, placa, ano, marca, modelo, cor, combustivel, preco, nportas, ac, ve, te, tdirecao);
                        estoque.adicionar(v, quantidade);
                    }
                    else
                    {
                        int id, ano, preco, cilindradas, quantidade;
                        std::string placa, marca, modelo, cor, combustivel, fd, ft, partida, injecao;

                        id = estoque.getNumVeiculos();
                        
                        std::cout << "Quantidade: ";
                        std::cin >> quantidade;
                        std::cout << "Ano: ";
                        std::cin >> ano;
                        std::cout << "Preço: ";
                        std::cin >> preco;
                        std::cout << "Marca: ";
                        std::cin >> marca;
                        std::cout << "Modelo: ";
                        std::cin >> modelo;
                        std::cout << "Número de cilindradas: ";
                        std::cin >> cilindradas;
                        std::cout << "Cor: ";
                        std::cin >> cor;
                        std::cout << "Placa: ";
                        std::cin >> placa;
                        std::cout << "Combustível: ";
                        std::cin >> combustivel;
                        std::cout << "Tipo Freio Dianteiro: ";
                        std::cin >> fd;
                        std::cout << "Tipo Freio Traseiro: ";
                        std::cin >> ft;
                        std::cout << "Tipo de Partida: ";
                        std::cin >> partida;
                        std::cout << "Tipo de Injeção: ";
                        std::cin >> injecao;
                        
                        Veiculo *v = new Moto(id, placa, ano, marca, modelo, cor, combustivel, preco, fd, ft, partida, injecao, cilindradas);
                        estoque.adicionar(v, quantidade);
                    }

                    break;
                case 2:
                    estoque.imprimir_estoque();
                    break;
                case 3:
                    std::cout << "Procurar por ID (0) ou Modelo (1)?" << std::endl;
                    int type;
                    std::cin >> type;
                    if (type == 0)
                    {
                        int idd;
                        std::cout << "Digite o ID do veículo: ";
                        std::cin >> idd;
                        estoque.procurar(idd);
                    }
                    else
                    {
                        std::string model;
                        std::cout << "Digite o modelo do veículo: ";
                        std::cin >> model;
                        estoque.procurar(model);
                    }
                    break;
                case 4:
                    std::cout << "Digite o id do veiculo que deseja remover: ";
                    int remove;
                    std::cin >> remove;
                    estoque.remover(remove);
                    break;
                case 0:
                    break;
                default:
                    std::cout << "Opção inválida!" << std::endl;
                    break;
                }
            } while (menu_interno != 0);
            break;
		case 4:
			do {
                std::cout << std::endl << "===Gerenciar Vendas===" << std::endl;
                std::cout << "1 - Cadastrar Venda" << std::endl;
                std::cout << "2 - Listar Vendas" << std::endl;
                std::cout << "3 - Buscar Venda" << std::endl;
                std::cout << "4 - Excluir Venda" << std::endl;
                std::cout << "0 - Voltar" << std::endl;

                std::cout << std::endl << "Insira uma opção: ";
                menu_interno = input_menu();

                switch (menu_interno) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 0:
                    break;
                default:
                    std::cout << "Opção inválida!" << std::endl;
                    break;
                }
            } while (menu_interno != 0);
            break;
		case 0:
            std::cout << "Sistema Encerrado!" << std::endl;
			break;
		default:
			std::cout << "Opção inválida!" << std::endl;
            break;
		}
    } while (menu_principal != 0);

    return 0;
}