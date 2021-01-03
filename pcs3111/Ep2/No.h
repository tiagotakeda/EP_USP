#ifndef NO_H
#define NO_H

#include "Fila.h"

class No
{
    public:
        No(int endereco);
        virtual ~No();
        virtual Fila* getFila();
        virtual int getEndereco();
        virtual void processar() = 0;
        virtual void receber(Datagrama* d);
        virtual void imprimir();

        static const int TAMANHO_FILA = 5;

    protected:
        int endereco;
        Fila* fila;

    private:
};

#endif // NO_H
