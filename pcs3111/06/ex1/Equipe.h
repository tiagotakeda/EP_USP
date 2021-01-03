#ifndef EQUIPE_H
#define EQUIPE_H
#include <iostream>
#include <string>

using namespace std;

class Equipe {
    protected:
        string nome;
        int membros;

    public:
        Equipe(string nome, int membros);
        virtual ~Equipe();

        string getNome();
        int getMembros();

        void imprimir();
};

#endif
