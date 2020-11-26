#include "Equipe.h"
#include "Modalidade.h"
#include "Competicao.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
    Equipe* e1 = new Equipe("Skyrats", 34);
    Equipe* e2 = new Equipe("Keepflying", 40);
    //Equipe* e3 = new Equipe("Thunderatz", 55);
    
    Modalidade* m = new Modalidade("InterUSP", 5);
    m->adicionar(e1);
    m->adicionar(e2);
    m->adicionar(e2);
    //m->adicionar(e3);
    m->imprimir();

    return 0;
}
