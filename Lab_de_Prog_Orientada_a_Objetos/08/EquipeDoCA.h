#ifndef EQUIPEDOCA_H
#define EQUIPEDOCA_H
#include "CentroAcademico.h"
#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;

class EquipeDoCA : public CentroAcademico {
public:
    EquipeDoCA(string nome, string sigla, Pessoa* presidente, int maxValor);
    virtual ~EquipeDoCA();
private:
    Pessoa* presidente;
    string sigla, nome;
    int maxValor;
};

#endif // EQUIPEDOCA_H