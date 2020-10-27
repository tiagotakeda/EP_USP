// FACA OS INCLUDES NECESSARIOS

#include <iostream>
#include <string>

using namespace std;

string* encontrarOponente(string nomes[], int membros[], int quantidade, string nomeEquipe, int membrosEquipe) {
    string *nome = NULL;

    for(int i = 0; i < quantidade; i++){
        if(membrosEquipe == membros[i]){
            if(nomeEquipe != nomes[i]){                
                nome = &nomes[i];
            }
        }
    }

    return nome;
}

/*
int main() {
    
    string nomes[] = {"Poli", "FEA", "ESALQ"};
    int membros[] = {10, 9, 10};

    string *p = encontrarOponente(nomes, membros, 3, "Poli", 10);

    cout << *p << endl;

    return 0;
}
*/