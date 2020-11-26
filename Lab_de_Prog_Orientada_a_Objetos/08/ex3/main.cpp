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

    cout << endl;

    Pessoa* q = new Pessoa("Takeda");
    cout << "Nome: " << q->getNome() << " NUSP: " << q->getNuspAuto() << endl;

    Pessoa* r = new Pessoa("Caio");
    cout << "Nome: " << r->getNome() << " NUSP: " << r->getNuspAuto() << endl;

    Pessoa* t = new Pessoa("Colombini");
    cout << "Nome: " << t->getNome() << " NUSP: " << t->getNuspAuto() << endl;

    delete q;
    delete r;
    delete t;

    return 0;
}