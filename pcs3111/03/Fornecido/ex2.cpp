#include <iostream>
#include <string>

using namespace std;

class Equipe {
public:
    string nome;
    int numeroDeMembros = 0;

    int getMaximoDeTorcedores();
    void imprimir();
};

////////////////////////////////////////////////////////////////////////////////////////

int Equipe::getMaximoDeTorcedores(){
    int x = 15 + 25*numeroDeMembros;
    
    return x;
}

void Equipe::imprimir(){
    cout << this->nome << " - " << this->numeroDeMembros << " membros" << endl;
}


////////////////////////////////////////////////////////////////////////////////////////

class Modalidade {
public:
    string nome;
    Equipe* e1 = NULL;
    Equipe* e2 = NULL;

    Equipe* getMaiorTorcida();
    bool adicionar(Equipe *e);

    void imprimir();
};

////////////////////////////////////////////////////////////////////////////////////////

Equipe* Modalidade::getMaiorTorcida(){
    if(this->e1 == NULL || this->e2 == NULL){
        return NULL;
    }

    if(this->e1->getMaximoDeTorcedores() > this->e2->getMaximoDeTorcedores()){
        return e1;
    }else{
        return e2;
    }
}

bool Modalidade::adicionar(Equipe* e){    
    if(this->e1 == NULL && this->e1 != e){
        this->e1 = e;
        return true;
    }else if(this->e2 == NULL && this->e2 != e){
        this->e2 = e;
        return true;
    }else{
        return false;
    }
}

void Modalidade::imprimir(){
    cout << this->nome << " - " << this->getMaiorTorcida() << " com maior torcida" << endl;
    e1->Equipe::imprimir();
    e2->Equipe::imprimir();
}


/*
int main() {
    Equipe* e1 = new Equipe;
    e1->nome = "Santos";
    e1->numeroDeMembros = 5;

    Equipe* e2 = new Equipe;
    e1->nome = "Flamengo";
    e1->numeroDeMembros = 8;

    Modalidade* m = new Modalidade;
    m->Modalidade::adicionar(e1);
    m->Modalidade::adicionar(e2);
    m->Modalidade::imprimir();

    return 0;
}
*/