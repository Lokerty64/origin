#include <iostream>
#include <string>

class figura
{
protected:
    int field1;
    std::string name;

public:
    figura()
    {
        this->field1 = 0;
        this->name = "Фигура: ";
    }
    int get_sides_count() 
    { 
        return field1;    
    }
    std::string get_name()
    {
        return name;
    }
};
class triangle : public figura
{
public:
    triangle()
    {
        this->field1 = 3;
        this->name = "Треугольник: ";
    }
};
class quadrilateral : public figura
{
public:
    quadrilateral()
    {
        this->field1 = 4;
        this->name = "Четырехугольник: ";
    }
};

int main()
{
    
    figura dot;
    triangle tri;
    quadrilateral quadro;
    std::cout << "Количество сторон:" << std::endl;
    std::cout << dot.get_name() << dot.get_sides_count() <<  std::endl;
    std::cout << tri.get_name() << tri.get_sides_count() << std::endl;
    std::cout << quadro.get_name() << quadro.get_sides_count();
    return 0;
}