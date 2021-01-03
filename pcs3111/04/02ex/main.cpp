#define NUMERO_MAXIMO_VALORES 10

#include "Equipe.h"
#include "Modalidade.h"
#include <iostream>

using namespace std;

/**
 * Faca os testes necessarios
 **/
int main() {
    Equipe* e1 = new Equipe();
    Equipe* e2 = new Equipe();
    Equipe* e3 = new Equipe();
    e1->setNome("Poli");
    e1->setNumeroDeMembros(11);
    e2->setNome("FEA");
    e2->setNumeroDeMembros(12);
    e3->setNome("ESALQ");
    e3->setNumeroDeMembros(13);

    Modalidade* m = new Modalidade();
    m->adicionar(e1);
    m->adicionar(e2);
    m->adicionar(e3);
    m->setNome("INTERUSP");
    m->imprimir();

    return 0;
}
