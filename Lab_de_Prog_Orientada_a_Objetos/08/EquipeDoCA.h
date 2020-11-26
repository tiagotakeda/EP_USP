#ifndef EQUIPEDOCA_H
#define EQUIPEDOCA_H
#include "CentroAcademico.h"
#include <string>
#include <iostream>

using namespace std;

class EquipedoCA : public CentroAcademico {
public:
    EquipeDoCA(string nome, string sigla,  Pessoa* presidente, int maxValor);
    virtual ~EquipeDoCA();
private:
    Pessoa* presidente;
    string sigla;
};

#endif // EQUIPEDOCA_H