
#include <iostream>

enum class month
{
    January = 1, 
    February, 
    March, 
    April, 
    May, 
    June, 
    July, 
    August, 
    September, 
    October, 
    November, 
    December
};


int main(int argc, char** argv)
{
    int Number = 0;
    bool check = false;

    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> Number;

        if (Number == 0)
        {
            std::cout << "До свидания" << std::endl;
            check = true;
        }
        else if (Number < 1 || Number > 12)
        {
            std::cout << "Введен неверный номер месяца! " << std::endl;
        }
        else
        {
            month enteredNumber = static_cast<month> (Number);
            
            switch (enteredNumber)
            {
                case (month::January): std::cout << "Январь" << std::endl;
                    break;
                case (month::February): std::cout << "Февраль" << std::endl;
                    break;
                case (month::March): std::cout << "Март" << std::endl;
                    break;
                case (month::April): std::cout << "Апрель" << std::endl;
                    break;
                case (month::May): std::cout << "Май" << std::endl;
                    break;
                case (month::June): std::cout << "Июнь" << std::endl;
                    break;
                case (month::July): std::cout << "Июль" << std::endl;
                    break;
                case (month::August): std::cout << "Август" << std::endl;
                    break;
                case (month::September): std::cout << "Сентябр" << std::endl;
                    break;
                case (month::October): std::cout << "Октябрь." << std::endl;
                    break;
                case (month::November): std::cout << "Ноябрь" << std::endl;
                    break;
                case (month::December): std::cout << "Декабрь" << std::endl;
                    break;
            }
        }
    } while (!check);
}