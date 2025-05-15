#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include "Cliente.h"

class ContaBancaria{
private:
    int conta;
    double saldo;
    Cliente titular;

public:
    //construtor.
    ContaBancaria(int conta, Cliente titular, double saldo);

    //métodos gets.
    int getconta();
    double getsaldo();

    //outros métodos.
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
};

#endif