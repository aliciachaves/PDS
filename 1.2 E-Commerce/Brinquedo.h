
#ifndef E_COMMERCE_BRINQUEDO_H
#define E_COMMERCE_BRINQUEDO_H

#include "Produto.h"


class Brinquedo : public Produto{

private:
    std::string _nome;
    int _idade_minima;
public:
    Brinquedo(int id, float valor, std::string nome, int idade_minima);
    void imprimir_info() override;
};

#endif
