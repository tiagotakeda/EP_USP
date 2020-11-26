#include "Equipe.h"
#ifndef TABELA_H
#define TABELA_H

using namespace std;

class Tabela {
private:
    Equipe** participantes = new Equipe*[quantidade];
    int* pontos = new int[quantidade];
    int quantidade;

    int getIndice(Equipe* participante);
public:
	Tabela(Equipe** participantes, int quantidade);
    ~Tabela();

    Equipe** getParticipantes() const;
    int getQuantidade();

    void pontuar(Equipe* participante, int pontos);
    int getPontos(Equipe* participante);

    void imprimir();

};
#endif // TABELA_H
