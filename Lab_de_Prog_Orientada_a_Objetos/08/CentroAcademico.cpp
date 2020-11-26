#include "CentroAcademico.h"

CentroAcademico::CentroAcademico(Pessoa* presidente, string sigla) : presidente (presidente),
                sigla (sigla){    
}

CentroAcademico::~CentroAcademico(){
}

string getSigla(){
    return this->sigla;
}

Pessoa* getPresidente(){
    return this->presidente;
}