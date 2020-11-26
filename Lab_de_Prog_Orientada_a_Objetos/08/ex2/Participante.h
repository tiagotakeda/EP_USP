#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H
#include <string>
#include <iostream>

using namespace std;

class Participante {
public:
    Participante(string nome);
    virtual ~Participante();

    virtual void imprimir() = 0;
    virtual string getNome();
protected:
    string nome;
};

#endif // PARTICIPANTE_H
