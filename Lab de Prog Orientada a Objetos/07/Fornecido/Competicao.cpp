#include "Competicao.h"

Competicao::Competicao(string nome, int maximoValor) :
nome(nome), maximoValor(maximoValor) {
    quantidadeDeEquipes = quantidadeModalidades = 0;
    equipes = new Equipe*[maximoValor];
    modalidades = new Modalidade*[maximoValor];
}

Competicao::~Competicao() {
    delete[] equipes;
}

int Competicao::getQuantidadeDeEquipes() {
    return quantidadeDeEquipes;
}

int Competicao::getQuantidadeDeModalidades() {
    return this->quantidadeModalidades;
}

Equipe** Competicao::getEquipes() {
    return equipes;
}

Modalidade** Competicao::getModalidades() {
    return this->modalidades;
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

bool Competicao::adicionar(Modalidade* m){
    if(quantidadeModalidades >= maximoValor) return false;
    for(int i = 0; i < quantidadeModalidades; i++){
        if(modalidades[i] == m) return false;
    }
    Equipe** equipesModalidade = new Equipe*[maximoValor];
    equipesModalidade = m->getEquipes();
    
    bool TemEquipe = false;

    for(int i = 0; i < quantidadeDeEquipes || equipesModalidade[i] == NULL; i++){
        TemEquipe = false;
        
        for(int k = 0; k < quantidadeDeEquipes || this->getEquipes()[k] == NULL; k++){
            if(equipesModalidade[i] == this->getEquipes()[k]){
                TemEquipe = true;
                break;
            }else{
                TemEquipe = false;
            }
        }
    }

    if(TemEquipe){
        modalidades[quantidadeModalidades] = m;
        quantidadeModalidades++;
        return true;
    }else{
        return false;
    }
}

void Competicao::imprimir() {
    cout << "Competicao " << nome << endl;
}
