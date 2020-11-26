#include "Equipe.h"
#include "EquipeComCapitao.h"

#include <string>
#include <iostream>
using namespace std;

int main() {
    EquipeComCapitao* cap = new EquipeComCapitao("Skyrats", 32, "Takeda");
    cout << cap->getNome() << endl;
    cout << cap->getMembros() << endl;
    delete cap;

    return 0;
}
