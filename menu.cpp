#include <iostream>
#include "menu.h"

using namespace std;

void menu() {

    int n = 0, op = 0;

    while(n == 0) {

        cout << "Escolha uma opção: " << endl;
        cout << " [1] - Criar uma empresa." << endl;
        cout << " [2] - Adicionar um funcionário em uma empresa." << endl;
        cout << " [3] - Listar todos os funcionários de uma empresa." << endl;
        cout << " [4] - Dar um aumento de salário aos funcionários de uma empresa." << endl;
        cout << " [5] - Listar funcionários de uma empresa com um tempo de 90 (ou mais) dias de admissão." << endl;
        cout << " [6] - Listar a média de funcionários da(s) empresa(s)." << endl;
        cout << " [0] - Encerrar o programa." << endl;
        cin >> op;

        switch(op) {

            case 1:

                //CriarEmpresa();
                break;

            case 2:

                //addFuncionario();
                break;

            case 0:

                n = 1;
                break;

            default:

                cout << "Número inválido." << endl << endl;

        }

    }

    cout << "Programa finalizado." << endl;

}
