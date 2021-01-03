#ifndef MODALIDADE_H
#define MODALIDADE_H
#include <string>
#include <stdexcept>
#include "Equipe.h"
#include "EquipeRepetida.h"
#include <iostream>

using namespace std;

class Modalidade {
public:
    Modalidade(string nome, int maximoEquipes);
    virtual ~Modalidade();
    void adicionar(Equipe* e);

    string getNome();
    int getQuantidade();

    void imprimir();
private:
    string nome;
    int maximoEquipes;
    int quantidade;
    Equipe** equipes;
};

#endif // MODALIDADE_H
