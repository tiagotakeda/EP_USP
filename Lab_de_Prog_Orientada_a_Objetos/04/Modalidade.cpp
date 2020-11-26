/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */
#include "Modalidade.h"

int Modalidade::calculaTotalTorcida(){
    if(equipes == NULL){
        return -1;
    }else{
        int soma_torcida = 0;
        
        for(int i = 0; i < getQuantidade(); i++){
            soma_torcida += equipes[i]->getMaximoDeTorcedores();
        }
    }   
}

bool Modalidade::adicionar(Equipe *e){
    if(getQuantidade() >= NUMERO_MAXIMO_VALORES){
        return false;
    }else{
        for(int i = 0; i < getQuantidade(); i++);
        equipes[i + 1] = e;

        return true;
    }
}

string Modalidade::getNome(){
    return this->nome;
}

int Modalidade::getQuantidade(){
    int i = 0;
    
    for(; equipes[i] != NULL; i++);

    return (i + 1); 
}

void Modalidade::setNome(string nome){
    return this->nome;
}

void Modalidade::imprimir(){
    for(int i = 0; i < getQuantidade(); i++){
        equipes[i]->imprimir();
    }
}