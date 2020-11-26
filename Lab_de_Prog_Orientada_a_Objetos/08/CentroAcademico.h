#ifndef CENTROACADEMICO_H
#define CENTROACADEMICO_H
/* Faca os includes necessaios */

class CentroAcademico {
public:
    CentroAcademico(Pessoa* presidente, string sigla);
    virtual ~CentroAcademico();

    virtual string getSigla();
    virtual Pessoa* getPresidente();
    /* Crie os atributos necessarios */
};

#endif // CENTROACADEMICO_H
