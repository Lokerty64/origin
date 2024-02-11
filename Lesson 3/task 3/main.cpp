#include <iostream>
#include <string>

class figura
{
protected:
    int field1;
    std::string name;
    std::string truefalse;
public:
    figura()
    {
        this->truefalse = "запятая";
        this->field1 = 0;
        this->name = "точка";
    }
    int get_sides_count()
    {
        return field1;
    }
    std::string get_name()
    {
        return name;
    }
    std::string get_truefalse()
    {
        return truefalse;
    }
    virtual void get_info()
    {
        std::cout <<  name << ":" << std::endl;
        std::cout <<  truefalse << std::endl;
        std::cout << "Количество сторн: "  << field1 << std::endl;
    }
};

class triangle : public figura
{
protected:
    int a=10, b=20, c=30;
    int A=50, B=60, C=70;
public:
    triangle()
    {
        this->field1 = 3;
        this->name = "Треугольник";
        this->truefalse = "Правильная";
    }
    triangle(int a, int b, int c, int A, int B, int C)
    {
        this->field1 = 3;
        this->name = "Треугольник";
        this->truefalse = "Правильная";
        this->C = 90;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

    }
    void get_info() override
    {
        std::cout <<  name << ":" << std::endl;
        std::cout <<  truefalse << std::endl;
        std::cout << "Количество сторн: "  << field1 << std::endl;
        std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << '\n' << std::endl;
    }
};
class quadrilateral : public figura
{
protected:
    int a=10, b=20, c=30, d=40;
    int A=50, B=60, C=70, D=80;
public:
    quadrilateral()
    {
        this->field1 = 4;
        this->name = "Четырехугольник";
        this->truefalse = "Неправильная";
    }
    void get_info() override
    {
        std::cout <<  name << ":" << std::endl;
        std::cout <<  truefalse << std::endl;
        std::cout << "Количество сторн: "  <<  field1 << std::endl;
        std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << '\n' << std::endl;
    }
};
class triangle90 : public triangle
{
public:
    triangle90()
    {
        this->name = "Прямоугольный треугольник";
        this->truefalse = "Неправильная";
        this->C = 90;
    }

    triangle90(int a,int b,int c,int A,int B)
    {
        this->name = "Прямоугольный треугольник";
        this->truefalse = "Неправильная";
        this->C = 90;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
    }
};

class triangle90_1 : public triangle
{
public:
    triangle90_1()
    {
        this->name = "Прямоугольный треугольник";
        this->truefalse = "Правильная";
        this->C = 90;
        this->B = 40;
    }

    triangle90_1(int a,int b,int c,int A)
    {
        this->name = "Прямоугольный треугольник";
        this->truefalse = "Правильная";
        this->C = 90;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = 40;
    }
};

class isosceles_triangle :public triangle
{
public:
    isosceles_triangle()
    {
        this->name = "Равнобедренный треугольник";
        this->truefalse = "Правильная";
        this->c = a;
        this->C = A;
    }


    isosceles_triangle(int a, int b, int A, int B)
    {
        this->name = "Равнобедренный треугольник";
        this->c = a;
        this->C = A;
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
    }
};
class equilateral_triangle : public triangle
{
public:
    equilateral_triangle()
    {
        this->name = "Равносторонний треугольник";
        this->truefalse = "Правильная";
        this->A = 60;
        this->c = a;
        this->b = a;
        this->C = A;
        this->B = A;
        this->a = a;
    }

    equilateral_triangle(int a)
    {
        this->name = "Равносторонний треугольник";
        this->truefalse = "Правильная";
        this->A = 60;
        this->c = a;
        this->b = a;
        this->C = A;
        this->B = A;
        this->a = a;
    }
};

class rectangle : public quadrilateral
{
public:
    rectangle()
    {
        this->name = "Прямоугольник";
        this->truefalse = "Правильная";
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = A;
        this->C = A;
        this->D = A;
    }

    rectangle(int a, int b)
    {
        this->name = "Прямоугольник";
        this->truefalse = "Правильная";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = A;
        this->C = A;
        this->D = A;
    }
    
};
class square : public rectangle
{
public:
    square()
    {
        this->name = "Квадрат";
        this->truefalse = "Правильная";
        this->c = a;
        this->b = a;
        this->d = a;

    }

    square(int a)
    {
        this->name = "Квадрат";
        this->truefalse = "Правильная";
        this->a = a;
        this->c = a;
        this->b = a;
        this->d = a;
     }    
    
};
class parallelogram : public quadrilateral
{
public:
    parallelogram()
    {
        this->name = "Параллелограмм";
        this->truefalse = "Неправильная";
        this->c = a;
        this->d = b;
        this->C = A;
        this->D = B;
    }

    parallelogram(int a, int b, int A, int B)
    {
        this->name = "Параллелограмм";
        this->truefalse = "Неправильная";
        this->a = a;
        this->c = a;
        this->b = b;
        this->d = b;
        this->A = A;
        this->C = A;
        this->B = B;
        this->D = B;
    }
    
};
class rhomb : public parallelogram
{
public:
    rhomb()
    {
        this->name = "Ромб";
        this->truefalse = "Неправильная";
        this->c = a;
        this->b = a;
        this->d = b;
    }
    rhomb(int a, int A, int B)
    {
        this->name = "Ромб";
        this->truefalse = "Неправильная";
        this->a = a;
        this->c = a;
        this->b = a;
        this->d = a;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
    }
    
};

void print_info(figura* a)
{
        a->get_info();
}

int main()
{

    figura dot;
    triangle tri;
    quadrilateral quadro;
    triangle90 tri1;
    triangle90_1 tri1_1;
    isosceles_triangle tri2;
    equilateral_triangle tri3;
    rectangle quadro1;
    square quadro2;
    parallelogram quadro3;
    rhomb quadro4;

    print_info(&tri);
    print_info(&tri1);
    print_info(&tri1_1);
    print_info(&tri2);
    print_info(&tri3);
    print_info(&quadro);
    print_info(&quadro1);
    print_info(&quadro2);
    print_info(&quadro3);
    print_info(&quadro4);

    return 0;
}
