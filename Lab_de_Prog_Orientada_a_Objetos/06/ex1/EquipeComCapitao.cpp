#include "EquipeComCapitao.h"

using namespace std;

EquipeComCapitao::EquipeComCapitao(string nome, int membros, string nomeCapitao)
        : Equipe (nome, membros){
    this->nomeCapitao = nomeCapitao;
}

EquipeComCapitao::~EquipeComCapitao(){
    cout << "Equipe com Capitao " << getNomeCapitao() << " destruida" << endl;
}

string EquipeComCapitao::getNomeCapitao(){
    return this->nomeCapitao;
}
