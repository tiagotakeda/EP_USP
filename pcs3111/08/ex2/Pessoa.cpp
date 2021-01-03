#include "Pessoa.h"

Pessoa::Pessoa(string nome) : Participante (nome){
    nusp_auto++;
}

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

int Pessoa::getNuspAuto(){
    return this->nusp_auto;
}