#include <iostream>
#include <vector>
#include "empresa.h"

using namespace std;

Empresa::Empresa() {

    this->nome = "";
    this->cnpj = "";

}

void Empresa::setNome(string nome) {

    this->nome = nome;

}

string Empresa::getNome() {

    return nome;

}

void Empresa::setCnpj(string cnpj) {

    this->cnpj = cnpj;

}

string Empresa::getCnpj() {

    return cnpj;

}

void criarEmpresa() {

    Empresa e;
    string nome, cnpj;

    cout << "Digite o nome da empresa: ";
    getline(cin, nome);
    e.setNome(nome);

    cout << "Digite o cnpj da empresa: ";
    getline(cin, nome);
    e.setCnpj(cnpj);

    e.setListaEmp(e);

}

vector Empresa::setListaEmp(Empresa e) {

    vetEmp.push_back(e);

}

void Empresa::getListaEmp() {

    for(int i = 0; i < vetFunc.size(); i++) {

        cout << "Nome: " << vetEmp[i].getNome();
        cout << "  |  CNPJ: " << vetEmp[i].getCnpj() << endl;

    }

}
