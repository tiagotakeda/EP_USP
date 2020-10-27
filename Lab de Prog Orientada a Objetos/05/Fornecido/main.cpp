#include "Equipe.h"
#include "Tabela.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Equipe* e = new Equipe("Santos", 11);
    cout << e->getNome() << " | " << e->getMembros() << endl;
    e->imprimir();

    Equipe* t = new Equipe("Sao Paulo", 13);

    Equipe** participantess[2] = {e, t};

    //Tabela* tab = new Tabela(participantess, 2);
    //tab->imprimir();
    
    return 0;
}
