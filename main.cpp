#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "funcionario.h"
#include "gerente.h"
#include "vendedor.h"

int main() {

    std::vector<Funcionario> funcionarios;
    std::vector<Gerente> gerentes;
    std::vector<Vendedor> vendedores;

    std::cout << "Sistema de Concessionária" << std::endl;
    int menu_principal = 0;
    int menu_interno = 0;
    int id;

    do {
        std::cout << std::endl << "===Menu Principal===" << std::endl;
        std::cout << "1 - Gerenciar Funcionários" << std::endl;
        std::cout << "2 - Gerenciar Clientes" << std::endl;
        std::cout << "3 - Gerenciar Estoque" << std::endl;
        std::cout << "4 - Gerenciar Vendas" << std::endl;
        std::cout << "0 - Sair" << std::endl;

        std::cout << std::endl << "Insira uma opção: ";
        std::cin >> menu_principal;

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
                std::cin >> menu_interno;

                switch (menu_interno) {
                case 1: {
                    std::cout << std::endl << "===Cadastrar Funcionário===" << std::endl;
                    
                    int tipo; // 0 - gerente || 1 - vendedor
                    int id = funcionarios.size();

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

                    Vendedor f(id, nome, cpf, telefone, endereco, salario, conta);
                    vendedores.push_back(f);
                    funcionarios.push_back(f);

                    // delete v;
                    // std::cout << "Insira o tipo (0 - Gerente, 1 - vendedor): ";
                    // std::cin >> conta; 
                }
                    break;
                case 2:
                    std::cout << std::endl << "===Listar Funcionários===" << std::endl;

                    for(int i = 0; i < funcionarios.size(); i++){
                        std::cout << "ID: " << funcionarios[i].getId() << std::endl;
                        std::cout << "NOME: " << funcionarios[i].getNome() << std::endl;
                        std::cout << "CPF: " << funcionarios[i].getCpf() << std::endl;
                        std::cout << "TELEFONE: " << funcionarios[i].getTelefone() << std::endl;
                        std::cout << "ENDEREÇO: " << funcionarios[i].getEndereco() << std::endl;
                        std::cout << "SALÁRIO: " << funcionarios[i].getSalario() << std::endl;
                        std::cout << "CONTA: " << funcionarios[i].getConta() << std::endl;
                        std::cout << (funcionarios.size() > 1 ? "---------------------------" : "") << std::endl;
                    }
                    break;
                case 3:
                    std::cout << std::endl << "===Buscar Funcionário===" << std::endl;
                    std:: cout << "Informe o id do Funcionário: ";
                    std::cin >> id;
                    std::cout << "NOME: " << funcionarios[id].getNome() << std::endl;
                    std::cout << "CPF: " << funcionarios[id].getCpf() << std::endl;
                    std::cout << "TELEFONE: " << funcionarios[id].getTelefone() << std::endl;
                    std::cout << "ENDEREÇO: " << funcionarios[id].getEndereco() << std::endl;
                    std::cout << "SALÁRIO: " << funcionarios[id].getSalario() << std::endl;
                    std::cout << "CONTA: " << funcionarios[id].getConta() << std::endl;
                    break;
                case 4:
                    std::cout << std::endl << "===Excluir Funcionário===" << std::endl;
                    std:: cout << "Informe o id do Funcionário: ";
                    std::cin >> id;
                    funcionarios.erase(funcionarios.begin() + id);
                    std:: cout << "Funcionário excluído com sucesso!" << std::endl;
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
                std::cin >> menu_interno;

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
                std::cin >> menu_interno;

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
		case 4:
			do {
                std::cout << std::endl << "===Gerenciar Vendas===" << std::endl;
                std::cout << "1 - Cadastrar Venda" << std::endl;
                std::cout << "2 - Listar Vendas" << std::endl;
                std::cout << "3 - Buscar Venda" << std::endl;
                std::cout << "4 - Excluir Venda" << std::endl;
                std::cout << "0 - Voltar" << std::endl;

                std::cout << std::endl << "Insira uma opção: ";
                std::cin >> menu_interno;

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