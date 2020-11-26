#include "Equipe.h"

Equipe::Equipe(string nome, int maxValor) : Participante(nome) {
    pessoas = new Pessoa*[maxValor];
    this->nome = nome;
    this->maxValor = maxValor;
}

Equipe::~Equipe() {
	delete[] pessoas;
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

Pessoa** Equipe::getPessoas() {
    return pessoas;
}
