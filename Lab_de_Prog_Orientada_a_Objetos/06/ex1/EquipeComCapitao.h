#ifndef EQUIPECOMCAPITAO_H
#define EQUIPECOMCAPITAO_H

#include "Equipe.h"
#include <string>
#include <iostream>

using namespace std;

class EquipeComCapitao: public Equipe {
protected:
    string nomeCapitao;

public:
    EquipeComCapitao(string nome, int membros, string nomeCapitao);
    ~EquipeComCapitao();

    string getNomeCapitao();
};

#endif // EQUIPECOMCAPITAO_H
