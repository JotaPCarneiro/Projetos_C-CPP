#include <iostream>
#include <locale>
#include <vector>

#include "menu.cpp"
#include "funcionario.cpp"
#include "empresa.cpp"

using namespace std;

int main(int argc, char* argv[]) {

    setlocale(LC_ALL, "Portuguese");

    menu();

    return 0;

}
