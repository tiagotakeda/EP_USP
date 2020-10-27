#include "EquipeComCapitao.h"

using namespace std;

// Implemente aqui os metodos

EquipeComCapitao::EquipeComCapitao(string nome, int membros, string nomeCapitao) 
        : Equipe (nomeCapitao){
}

EquipeComCapitao::~EquipeComCapitao(){
    cout << "Equipe com Capitao " << getNomeCapitao() << " destruida" << endl;
}

EquipeComCapitao::getNomeCapitao(){
    return this->nomeCapitao;
}