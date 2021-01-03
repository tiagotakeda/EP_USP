#ifndef PERSISTENCIAEQUIPE_H
#define PERSISTENCIAEQUIPE_H

#include <string>
#include "Equipe.h"

using namespace std;

class PersistenciaEquipe {
private:
    Equipe* e;
    string arquivo;

public:
    PersistenciaEquipe(string arquivo);
    virtual ~PersistenciaEquipe();

    void inserir(Equipe *e);
};
#endif // PERSISTENCIAEQUIPE_H
