#include <iostream>


struct adress
{
    std::string Town;
    std::string Street;
    int House = 0;
    int Apartment = 0;
    int index = 0;
};

void printw(adress* num)
{
    std::cout << "Город: " << num->Town << std::endl;
    std::cout << "Улица: " << num->Street << std::endl;
    std::cout << "Номер дома: " << num->House << std::endl;
    std::cout << "Номер квартиры: " << num->Apartment << std::endl;
    std::cout << "Индекс: " << num->index << std::endl;

    std::cout << std::endl;
}



int main()
{
   
    adress res1;
    res1.Town = "Москва";
    res1.Street = "Арбат";
    res1.House = 12;
    res1.Apartment = 8;
    res1.index = 123456;

    adress res2;
    res2.Town = "Ижевск";
    res2.Street = "Пушкина";
    res2.House = 59;
    res2.Apartment = 143;
    res2.index = 953769;

    printw(&res1);
    printw(&res2);
}