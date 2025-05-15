#include "Cliente.h"
using namespace std;

//implementação do construtor.
Cliente::Cliente(string nome, string cpf){
    this->nome = nome;
    this->cpf = cpf;
}

//implementação dos métodos gets.
string Cliente::getnome(){
    return nome;
}

string Cliente::getcpf(){
    return cpf;
}