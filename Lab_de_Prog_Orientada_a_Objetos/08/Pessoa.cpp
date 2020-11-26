#include "Pessoa.h"

Pessoa::Pessoa(string nome, int nusp) : Participante(nome){
    this->nusp = nusp;
}

Pessoa::~Pessoa(){

}

int Pessoa::getNusp(){
    return this->nusp;
}

void Pessoa::imprimir(){
    cout << "Nome: " << getNome() << " NUSP: " << getNusp() << endl;
}