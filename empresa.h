#ifndef EMPRESA_H
#define EMPRESA_H

#include "funcionario.h"

class Empresa {

    private:

        std::string nome;
        std::string cnpj;
        std::vector <Empresa> vetEmp;

    public:

        Empresa();
        Empresa(std::string nome, std::string cnpj);

        void setNome(std::string nome);
        std::string getNome();
        void setCnpj(std::string cnpj);
        std::string getCnpj();
        std::vector setListaEmp(Empresa e);
        void getListaEmp();

};

void criarEmpresa();

#endif // EMPRESA_H
