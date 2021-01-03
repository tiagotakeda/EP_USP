#ifndef PESSOA_H
#define PESSOA_H
#include "Participante.h"
#include <string>
#include <iostream>

using namespace std;

class Pessoa : public Participante {
public:
    Pessoa(string nome);
    Pessoa(string nome, int nusp);
    virtual ~Pessoa();

    virtual int getNusp();
    static int getNuspAuto();
    void imprimir();
protected:
    string nome;
    int nusp;
    static int nusp_auto = 12345678;
};

#endif // PESSOA_H
