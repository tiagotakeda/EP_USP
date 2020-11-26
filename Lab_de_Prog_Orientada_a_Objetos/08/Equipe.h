#ifndef EQUIPE_H
#define EQUIPE_H
#include "Pessoa.h"
#include "Participante.h"
#include <string>
#include <iostream>

using namespace std;

class Equipe : public Participante {
public:
    Equipe(string nome, int maxValor);
    virtual ~Equipe();

    virtual bool adicionar(Pessoa* p);
    virtual Pessoa** getPessoas();

private:
    string nome;
    int maxValor;
    int quantidade;

    Pessoa** pessoas;
};

#endif // EQUIPE_H
