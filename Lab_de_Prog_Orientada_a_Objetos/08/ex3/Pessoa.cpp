#include "Pessoa.h"

int Pessoa::nusp_auto = 12346577;

Pessoa::Pessoa(string nome) : Participante(nome){
    Pessoa::nusp_auto++;
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
    return Pessoa::nusp_auto;
}