#ifndef EQUIPEREPETIDA_H
#define EQUIPEREPETIDA_H

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

class EquipeRepetida : public invalid_argument{
    public:
        EquipeRepetida(string mensagem);
};

#endif // EQUIPEREPETIDA_H