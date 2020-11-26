// Adicione aqui as diretivas de compilacao necessarias
#include "Equipe.h"
#include <string>
#include <iostream>

#ifndef EQUIPECOMCAPITAO_H
#define EQUIPECOMCAPITAO_H

using namespace std;

class EquipeComCapitao: public Equipe {
private:
    // Adicione aqui os atributos necessarios
    string nomeCapitao;

public:
    EquipeComCapitao(string nome, int membros, string nomeCapitao);
    ~EquipeComCapitao();

    string getNomeCapitao();
};

#endif // EQUIPECOMCAPITAO_H