#include "EquipeDoCA.h"

EquipeDoCA::EquipeDoCA(string nome, string sigla, Pessoa* presidente, int maxValor) : 
                    CentroAcademico(presidente, sigla){
    this->nome = nome;
    this->maxValor = maxValor;
}

EquipeDoCA::~EquipeDoCA(){
}