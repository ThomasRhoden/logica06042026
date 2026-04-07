#include <iostream>
#include <string>

int main(){

    std::string nome = "Thomas";

    std::cout<<nome[0];
    //busca a letra dentro do string (0 no caso = T)
    std::cout<<nome[1];
    //busca a letra dentro do string (1 no caso = h)
    std::cout<<nome[nome.length() - 1]<<std::endl;
    nome[0] = 'A';
    std::cout<<nome<<std::endl;
    std::cout<<nome.at(0)<<std::endl;
    nome.at(0) = 'z';
    std::cout<<nome;


    return 0;
}