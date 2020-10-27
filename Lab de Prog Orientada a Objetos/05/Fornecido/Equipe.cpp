#include "Equipe.h"
#include <iostream>

using namespace std;

Equipe::Equipe(string nome, int membros) : nome (nome), membros (membros){

}

Equipe::~Equipe(){
    cout << "Equipe " << this->nome << " destruida" << endl;
}

string Equipe::getNome() {
    return this->nome;
}

int Equipe::getMembros() {
    return this->membros;
}

void Equipe::imprimir() {
    cout << "Equipe " << this->nome << endl;
}
