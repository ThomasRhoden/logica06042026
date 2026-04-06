#include <iostream>
#include <string>

int main(){

    std::string nome;
    auto sobrenome = " Rhoden";

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<nome.append(sobrenome);

    return 0;
}