#include <iostream>
#include "Cliente.h"
#include "ContaBancaria.h"

using namespace std;

int main(){

    //criação dos objetos Cliente.
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    //criação dos objetos ContaBancaria.
    ContaBancaria conta1(1001, cliente1, 1000.00);
    ContaBancaria conta2(1002, cliente2, 0.0);
    ContaBancaria conta3(1003, cliente3, 0.0);
     
    //exibe o saldo de Ana(conta1).
    cout << "Saldo atual da conta 1001: R$ " << conta1.getsaldo() << endl; 

    // Ana(conta1) transfere R$ 200 pra Bruno(conta2).
    conta1.transferir(200, conta2);
    cout << "Transferido: R$200 da conta 1001 para a conta 1002" << endl;

    // Ana(conta1) trasfere 150 pra Bruno(conta2) e 150 pra Carla(conta3).
    conta1.transferir(300, conta2, conta3);
    cout << "Transferido: R$150 para cada conta (1002 e 1003) da conta 1001" << endl;

    //linhas em branco.
    cout << endl;
    cout << endl;

    // informações cliente1.
    cout << "Titular: " << cliente1.getnome() << ", " << "CPF: " << cliente1.getcpf() << endl;
    cout << "Número da conta: " << conta1.getconta() << ", " << "Saldo: R$ " << conta1.getsaldo() << endl;

    // informações cliente2.
    cout << "Titular: " << cliente2.getnome() << ", " << "CPF: " << cliente2.getcpf() << endl;
    cout << "Número da conta: " << conta2.getconta() << ", " << "Saldo: R$ " << conta2.getsaldo() << endl;

    // informações cliente3.
    cout << "Titular: " << cliente3.getnome() << ", " << "CPF: " << cliente3.getcpf() << endl;
    cout << "Número da conta: " << conta3.getconta() << ", " << "Saldo: R$ " << conta3.getsaldo() << endl;

    return 0;
}