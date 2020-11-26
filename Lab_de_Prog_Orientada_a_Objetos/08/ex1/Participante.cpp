#include "Participante.h"

Participante::Participante(string nome){
    this->nome = nome;
}

Participante::~Participante(){
    
}

string Participante::getNome(){
    return this->nome;
}