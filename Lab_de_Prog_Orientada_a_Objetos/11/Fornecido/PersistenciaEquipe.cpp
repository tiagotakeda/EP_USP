#include <fstream>
#include "PersistenciaEquipe.h"

using namespace std;

PersistenciaEquipe::PersistenciaEquipe(string arquivo){
    this->arquivo = arquivo;
}

PersistenciaEquipe::~PersistenciaEquipe(){

}

void PersistenciaEquipe::inserir(Equipe *e){
    ifstream entrada;
    entrada.open("dados.txt");

    ofstream saida;
    saida.open("saida.txt");

    while(entrada){
        string linha;
        entrada >> linha;
        
        if(saida.fail()){
            cout << "Erro ao escrever" << endl;
        }else{
            saida << linha;
        }
    }

    saida.close();

    if(!entrada.eof()){
        cout << "Erro de leitura" << endl;
        entrada.close();
    }
}