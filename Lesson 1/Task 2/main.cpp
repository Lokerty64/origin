#include <iostream>



struct bank
{
    int number = 0;
    std::string name;
    double money = 0.00;
};

void changing (bank* person1, double newMoney)
{
    person1->money = newMoney;
}

int main()
{

    bank person1;
    double newMoney = 0;

    std::cout << "Введите номер счёта: ";
    std::cin >> person1.number;
    
    std::cout << "Введите имя владельца: ";
    std::cin >> person1.name;
    
    std::cout << "Введите баланс: ";
    std::cin >> person1.money;
    
    std::cout << "Введите новый баланс: ";
    std::cin >> newMoney;

    changing(&person1, newMoney);

    std::cout.precision(0);
    std::cout << "Ваш счёт: ";
    std::cout << person1.name << ", " << person1.number << ", " << std::fixed << person1.money  << std::endl;
}