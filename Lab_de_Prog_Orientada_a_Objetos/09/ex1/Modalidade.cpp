#include "Modalidade.h"

Modalidade::Modalidade(string nome, int maximoEquipes) :
        nome(nome), maximoEquipes(maximoEquipes) {
    quantidade = 0;
    equipes = new Equipe*[maximoEquipes];

    if(maximoEquipes <= 1 || nome == ""){
        throw new invalid_argument("maximoEquipes <= 1 ou nome vazio");
    }
}

Modalidade::~Modalidade() {
    delete[] equipes;
}

void Modalidade::adicionar(Equipe* e) {
    if(quantidade == maximoEquipes){
        throw new overflow_error("Vetor cheio");
    }
    
    try{
        equipes[quantidade] = e;
        quantidade++;
    }catch(overflow_error *e){
        cout << "ERRO: " << e->what() << endl;
        delete e;
    }
}


string Modalidade::getNome() {
    return nome;
}

int Modalidade::getQuantidade() {
    return quantidade;
}

void Modalidade::imprimir() {
    cout << "\t" << getNome() << endl;
    
    for(int i = 0; i < quantidade; i++) {
        cout << "\t\t";
        equipes[i]->imprimir();
    }
}

