#include <iostream>
#include <vector>
#include "funcionario.h"

using namespace std;

void Funcionario::setNome(string nome) {

    this->nome = nome;

}

string Funcionario::getNome() {

    return nome;

}

void Funcionario::setCpf(string cpf) {

    this->cpf = cpf;
}

string Funcionario::getCpf() {

    return cpf;

}

void Funcionario::setSalario(float salario) {

    this->salario = salario;

}

float Funcionario::getSalario() {

    return salario;

}

void criarFuncionario() {

    Funcionario f;
    string nome, cpf;
    float salario;

    cout << "Digite o nome do funcion�rio: ";
    getline(cin, nome);

    cout << "Digite o CPF do funcion�rio: ";
    getline(cin, cpf);

    cout << "Digite o sal�rio do funcionario: ";
    cin >> salario;

    f.setNome(nome);
    f.setCpf(cpf);
    f.setSalario(salario);



}
