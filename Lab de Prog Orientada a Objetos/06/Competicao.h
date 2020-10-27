// Inclua aqui as diretivas de compilacao necessarias

#ifndef COMPETICAO_H
#define COMPETICAO_H

using namespace std;

class Competicao {
  private:
      // Inclua aqui os atributos necessarios

  public:
    Competicao(string nome, int maximoEquipes);
    ~Competicao();

    Equipe** getEquipes();
    int getQuantidade();
    bool adicionar(Equipe* e);

    void imprimir();
};

#endif // COMPETICAO_H
