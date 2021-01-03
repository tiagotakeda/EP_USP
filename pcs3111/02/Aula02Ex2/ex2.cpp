// FACA OS INCLUDES NECESSARIOS

#include <iostream>

using namespace std;

int calcularEstatisticas (int membros[], int quantidade, int* minimo, int& maximo) {
    int total;

    if(quantidade == 0){
        *minimo = 0;
        maximo = 0;
        return 0;
    }else{
        total = membros[0];
        *minimo = membros[0];
        maximo = membros[0];

        

        for(int i = 1; i < quantidade; i++){
            if(membros[i] <= *minimo){
                *minimo = membros[i];
            }

            

            if(membros[i] >= maximo){
                maximo = membros[i];
            }

            total += membros[i];
        }

        return total;
    }
}

/*
int main() {
    
    int membros[] = {};
    int minimo;
    int maximo;

    cout << calcularEstatisticas(membros, 0, &minimo, maximo) << endl;
    cout << minimo << endl;
    cout << maximo << endl;
    return 0;
}*/
