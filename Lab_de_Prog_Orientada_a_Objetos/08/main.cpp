#include "Pessoa.h"
#include "Participante.h"
#include "Equipe.h"
#include "CentroAcademico.h"
#include "EquipeDoCA.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
    Pessoa* p = new Pessoa("Spera", 123456);
    p->imprimir();

    CentroAcademico* centro = new CentroAcademico(p, "CEE");
    cout << "Presidente: " << centro->getPresidente()->getNome() << " do " << centro->getSigla() << endl;

    delete p;
    delete centro;

    return 0;
}