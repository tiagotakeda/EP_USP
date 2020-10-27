/*
 * Use as diretivas adequadas e inclua os arquivos e/ou bibliotecas
 * necessarios para a classe.
 */

#ifndef MODALIDADE_H
#define MODALIDADE_H
#define NUMERO_MAXIMO_VALORES 10

#include "Equipe.h"
#include <iostream>
#include <string>

using namespace std;

class Modalidade {
/*  Os atributos devem ser acessiveis somente internamente ao escopo
 *  da classe
 */

/*
 * Os metodos podem ser acessados de fora do escopo da classe
 */

    private:
        Equipe** equipes;
        string nome;

    public:
        int calculaTotalTorcida();
        bool adicionar(Equipe* e);

        string getNome();
        int getQuantidade();
        void setNome(string nome);

        void imprimir();
};
#endif // MODALIDADE_H