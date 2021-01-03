#include "Competicao.h"

Competicao::Competicao(string nome, int maximoValor) :
        nome(nome), maximoValor(maximoValor) {
    quantidadeDeEquipes = 0;
    quantidadeDeModalidades = 0;
    equipes = new Equipe*[maximoValor];
    modalidades = new Modalidade*[maximoValor];
}

Competicao::~Competicao() {
	delete[] equipes;
	delete[] modalidades;
}

int Competicao::getQuantidadeDeEquipes() {
    return quantidadeDeEquipes;
}

int Competicao::getQuantidadeDeModalidades() {
    return quantidadeDeModalidades;
}

Equipe** Competicao::getEquipes() {
    return equipes;
}

Modalidade** Competicao::getModalidades() {
    return modalidades;
}

bool Competicao::adicionar(Equipe* e) {
    if(quantidadeDeEquipes >= maximoValor) return false;
    for(int i = 0; i < quantidadeDeEquipes; i++) {
        if(equipes[i] == e) return false;
    }
    equipes[quantidadeDeEquipes] = e;
    quantidadeDeEquipes++;
    return true;
}

bool Competicao::adicionar(Modalidade* m) {
    if(quantidadeDeModalidades >= maximoValor) return false;
    for(int i = 0; i < quantidadeDeModalidades; i++) {
        if(modalidades[i] == m) return false;
    }
    modalidades[quantidadeDeModalidades] = m;

    for(int i = 1; i < quantidadeDeEquipes; i++){
        if(equipes[i-1] == equipes[i]) throw new EquipeRepetida("Equipe Repetida");

        try{
            m->adicionar(equipes[i]);
        }catch(EquipeRepetida *equipes[]){
            delete equipes[i];
        }
    }


    quantidadeDeModalidades++;
    return true;
}

void Competicao::imprimir() {
    cout << nome << endl;
}
