#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario {

    private:

        std::string nome;
        std::string cpf;
        float salario;
        // data de admissao
        std::vector <Funcionario> vetFunc;

    public:

        Funcionario();

        void setNome(std::string nome);
        std::string getNome();
        void setCpf(std::string cpf);
        std::string getCpf();
        void setSalario(float salario);
        float getSalario();
        //void setDataAd();
        //Data getDataAd();

};

void criarFuncionario();

#endif // FUNCIONARIO_H
