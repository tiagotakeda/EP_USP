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

int Equipe::getMaximoDeTorcedores(){
    int x = 15 + 25*numeroDeMembros;
    
    return x;
}

void Equipe::imprimir(){
    cout << this->nome << " - " << this->numeroDeMembros << " membros" << endl;
}


////////////////////////////////////////////////////////////////////////////////////////

/*class Modalidade {
public:
    string nome;
    Equipe* e1 = NULL;
    Equipe* e2 = NULL;

    Equipe* getMaiorTorcida();
    bool adicionar(Equipe *e);

    void imprimir();
};

/** Implementar metodos da classe Modalidade **/

/** Testar classes no metodo main().

    REMOVER METODO main() ANTES DE ENVIAR AO JUDGE!
**/
/*
int main() {
    Equipe* e1 = new Equipe;
    e1->nome = "Santos";
    e1->numeroDeMembros = 1;
    e1->imprimir();
    cout << "Total de membros = " << e1->getMaximoDeTorcedores() << endl;

    return 0;
}
*/

