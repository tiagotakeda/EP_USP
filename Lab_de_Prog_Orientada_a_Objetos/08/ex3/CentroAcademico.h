#ifndef CENTROACADEMICO_H
#define CENTROACADEMICO_H
#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;

class CentroAcademico {
public:
    CentroAcademico(Pessoa* presidente, string sigla);
    virtual ~CentroAcademico();

    virtual string getSigla();
    virtual Pessoa* getPresidente();
private:
    Pessoa* presidente;
    string sigla;
};

#endif // CENTROACADEMICO_H