#include "Pessoa.h"
#include "Participante.h"
#include "Equipe.h"
#include <iostream>

using namespace std;

int main() {
    Pessoa* p = new Pessoa*("Spera", 123456789);
    p->imprimir();

    return 0;
}