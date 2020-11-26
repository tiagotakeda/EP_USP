#include "Pessoa.h"

Pessoa::Pessoa(string nome, int nusp) : Participante(nome){
    this->nusp = nusp;
}

Pessoa::~Pessoa(){

}

string Pessoa::getNome(){
    return this->nome;
}

void Pessoa::imprimir(){
    cout << "Nome: " << getNome() << " " << "NUSP: " << getNusp() << endl;
}

int Pessoa::getNusp(){
    return this->nusp;
}