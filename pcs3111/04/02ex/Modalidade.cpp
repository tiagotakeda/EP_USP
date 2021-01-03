/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */
#include "Modalidade.h"
#include <iostream>
#include <string>

using namespace std;

int Modalidade::calculaTotalTorcida(){
    if(equipes[0] == NULL){
        return -1;
    }else{
        int soma_torcida = 0;
        
        for(int i = 0; i < getQuantidade(); i++){
            soma_torcida += equipes[i]->getMaximoDeTorcedores();
        }

        return soma_torcida;
    }  
}

bool Modalidade::adicionar(Equipe* e){
    if(getQuantidade() >= NUMERO_MAXIMO_VALORES){
        return false;
    }else{
        int i = 0;
        for(; i < getQuantidade(); i++);
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
    this->nome = nome;
}

void Modalidade::imprimir(){
    cout << this->nome << " - " << calculaTotalTorcida() << " torcedores no maximo" << endl;
    
    for(int i = 0; i < getQuantidade(); i++){
        equipes[i]->imprimir();
    }
}