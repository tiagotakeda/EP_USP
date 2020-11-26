//FACA OS INCLUDES NECESARIOS
#include <iostream>
#include <string>

using namespace std;
//IMPLEMENTE AS FUNCOES
// EXERCICIO 1


int calculaPontuacao(int posicao, bool participou) {
    if(!participou || posicao >= 6){
        return 0;
    }else if(posicao == 1){
        return 7;
    }else if(posicao == 2){
        return 5;
    }else if(posicao == 3){
        return 4;
    }else if(posicao == 4){
        return 3;
    }else if(posicao == 5){
        return 1;
    }
}

// EXERCICIO 2

int calculaPontuacaoFinal(int posicoes[], bool participou[], int quantidade) {
    int p_final = 0;

    for(int i = 0; i < quantidade; i++){
        p_final += calculaPontuacao(posicoes[i], participou[i]);
    }

    return p_final;
}


// EXERCICIO 3

bool nomesIguais(string nomes[], int quantidade) {
    string atual, prox;

    for(int i = 1; i < quantidade; i++){
        atual = nomes[i-1];
        prox = nomes[i];

        if(atual == prox){
            return true;
        }

        for(int k = 2; k < quantidade; k++){
            prox = nomes[k];

            if(atual == prox){
                return true;
            }
        }
    }

    return false;
}


/*
int main()
{
    string nomes[] = {"ECA", "Poli", "FEA", "FFLCH", "EACH"};
    int quantidade = 5;
    bool resultado = nomesIguais(nomes, quantidade);
    cout << "Resultado: " << resultado << endl;
    return 0;
}
//*/
