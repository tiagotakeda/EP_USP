/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */
#define NUMERO_MAXIMO_VALORES 10

#include "Equipe.h"
#include <iostream>
#include <string>

using namespace std;

string Equipe::getNome() {
    return nome;
}

int Equipe::getNumeroDeMembros() {
    return numeroDeMembros;
}

void Equipe::setNome(string nome) {
    this->nome = nome;
}

void Equipe::setNumeroDeMembros(int membros) {
    numeroDeMembros = membros;
}

int Equipe::getMaximoDeTorcedores() {
    return (15 + 25 * numeroDeMembros);
}

void Equipe::imprimir() {
    cout << nome << " - " << numeroDeMembros << " membros" << endl;
}