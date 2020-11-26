#include "Equipe.h"
#include "Modalidade.h"
#include "Competicao.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
    Modalidade* m = new Modalidade("InterUSP", 3);
    m->imprimir();

    return 0;
}
