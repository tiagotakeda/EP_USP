#include "CentroAcademico.h"

CentroAcademico::CentroAcademico(Pessoa* presidente, string sigla) : presidente (presidente),
                sigla (sigla){    
}

CentroAcademico::~CentroAcademico(){
}

string CentroAcademico::getSigla(){
    return this->sigla;
}

Pessoa* CentroAcademico::getPresidente(){
    return this->presidente;
}