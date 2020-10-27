#ifndef COMPETICAOIMPRIMIVEL_H
#define COMPETICAOIMPRIMIVEL_H
#include "Competicao.h"
#include <iostream>

using namespace std;

class CompeticaoImprimivel: public Competicao {
public:
    CompeticaoImprimivel(string nome, int maximoValor);
    virtual ~CompeticaoImprimivel();

    void imprimir();
};

#endif // COMPETICAOIMPRIMIVEL_H
