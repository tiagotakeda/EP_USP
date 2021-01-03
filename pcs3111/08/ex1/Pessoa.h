#ifndef PESSOA_H
#define PESSOA_H
#include "Participante.h"
#include <string>
#include <iostream>

using namespace std;

class Pessoa : public Participante {
public:
    Pessoa(string nome, int nusp);
    virtual ~Pessoa();

    virtual int getNusp();

    void imprimir();
protected:
    string nome;
    int nusp;
};

#endif // PESSOA_H
