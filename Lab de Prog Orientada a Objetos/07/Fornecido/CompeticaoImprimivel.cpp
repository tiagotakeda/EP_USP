#include "CompeticaoImprimivel.h"

CompeticaoImprimivel::CompeticaoImprimivel(string nome, int maximoValor):
        Competicao(nome, maximoValor){

}

CompeticaoImprimivel::~CompeticaoImprimivel() {

}

void CompeticaoImprimivel::imprimir(){
    cout << "Competicao " << nome << endl;

        Equipe** equipess = Competicao::getEquipes();

    for(int i = 0; i < getQuantidadeDeEquipes(); i++){
        cout << "\tEquipe " << equipess[i] << endl;
    }
}