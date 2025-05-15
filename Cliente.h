#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
private: 
    std::string nome;
    std::string cpf;

public:
    //construtor.
    Cliente(std::string nome, std::string cpf);

    //métodos gets.
    std::string getnome();
    std::string getcpf();
};

#endif