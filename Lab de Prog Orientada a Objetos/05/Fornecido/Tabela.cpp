#include "Tabela.h"
#include "Equipe.h"
#include <iostream>

using namespace std;

Tabela::Tabela(Equipe** participantes, int quantidade) : participantes (participantes), quantidade (quantidade){
    for(int i  = 0; i < this->quantidade; i++)
        pontos[i] = 0;
}

Tabela::~Tabela(){
    cout << "Tabela com " << this->quantidade << " equipe(s) destruida" << endl;
    delete[] participantes;
}

// NAO altere os demais metodos

int Tabela::getIndice(Equipe* participante) {
    for (int i = 0; i < this->quantidade; i++) {
        if (this->participantes[i] == participante) {
            return i;
        }
    }
    return -1;
}

Equipe** Tabela::getParticipantes() const {
    return this->participantes;
}

int Tabela::getQuantidade() {
    return this->quantidade;
}

void Tabela::pontuar(Equipe* participante, int pontos) {
    int indice = getIndice(participante);
    if (indice != -1)
        this->pontos[indice] += pontos;
}

int Tabela::getPontos(Equipe* participante) {
    int indice = getIndice(participante);
    if (indice == -1)
        return -1;
    return this->pontos[indice];
}

void Tabela::imprimir() {
    cout << "Tabela com " << this->quantidade << "equipe(s)";
    for (int i = 0; i < quantidade; i++)
        participantes[i]->imprimir();
}
