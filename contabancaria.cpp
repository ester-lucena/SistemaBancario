#include "ContaBancaria.h"
#include "Cliente.h"

//implementação do construtor.
ContaBancaria::ContaBancaria(int conta, Cliente titular, double saldo):
    conta(conta),
    titular(titular),
    saldo(saldo) {
}

//implementação dos métodos gets.
int ContaBancaria::getconta(){
    return conta;
}

double ContaBancaria::getsaldo(){
    return saldo;
}

//implementação de depositar, sacar e trasferir.
void ContaBancaria::depositar(double valor){
    saldo += valor;
}

void ContaBancaria::sacar(double valor){
    if(saldo == 0){
        return;
    } else if(valor > saldo){
        return;
    } else{
        saldo -= valor;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if(saldo == 0){
        return;
    } else if(valor > saldo){
        return;
    } else{
        this->saldo -= valor;
        destino.depositar(valor);
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if(saldo == 0){
        return;
    } else if(valor > saldo){
        return;
    } else{
        this->saldo -= valor;
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);
    } 
}