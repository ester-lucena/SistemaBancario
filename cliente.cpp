#include "Cliente.h"

//implementação do construtor.
Cliente::Cliente(std::string nome, std::string cpf){
    this->nome = nome;
    this->cpf = cpf;
}

//implementação dos métodos gets.
std::string Cliente::getnome(){
    return nome;
}

std::string Cliente::getcpf(){
    return cpf;
}