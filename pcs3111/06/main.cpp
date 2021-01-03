#include "Equipe.h"
#include "EquipeComCapitao.h"

#include <iostream>
using namespace std;

int main() {
    //Teste aqui o seu codigo

    EquipeComCapitao* cap = new EquipeComCapitao("Skyrats", 32, "Takeda");
    cout << cap->getNome() << endl;
    cout << cap->getMembros << endl;
    delete cap;

    return 0;
}