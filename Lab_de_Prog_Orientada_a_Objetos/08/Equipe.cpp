#include "Equipe.h"

Equipe::Equipe(string nome, int maxValor) :
nome(nome), maxValor(maxValor) {
    pessoas = new Pessoa*[maxValor];
}

Equipe::~Equipe() {
	delete[] nusps;
}

bool Equipe::adicionar(Pessoa* p) {
    if(quantidade >= maxValor) return false;
    for(int i = 0; i < quantidade; i++) {
        if(pessoas[i] == p) return false;
    }
    pessoas[quantidade] = p;
    quantidade++;
    return true;
}

int* Equipe::getPessoas() {
    return pessoas;
}
