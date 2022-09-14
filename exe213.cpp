// exe213.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    float sal;
    std::cout << "entre com  o seu salario: ";
    std::cin >> sal;
    if (sal <= 300) {
        std::cout << (sal * 0.35) + sal;
    }

    else std::cout << (sal * 0.15) + sal;
}