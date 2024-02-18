#include <iostream>
#include <string>

class figura
{
protected:
    int field1 = 0;
    bool check = false;
    std::string name;

    
    virtual bool Check()
	{
		if (field1 == 0) { return true; }
		else { return false; }
	};
public:
    figura()
    {
        this->field1 = 0;
        this->name = "точка";
        this->check = false;
    }
    
   std::string trex()
   {
        if (Check()) {  return "Правильная";}
		else { return "Неправильная"; }
    }
    
    virtual void get_info()
    {
        std::cout <<  name << ":" << std::endl;
        std::cout << trex();
        std::cout << "Количество сторн: "  << field1 << std::endl;
    }
};

class triangle : public figura
{
protected:
    int a=10, b=20, c=30;
    int A=50, B=60, C=70;
    bool Check() override
	{
		if ((A + B + C) == 180) { return true; }
		else { return false; }
	};

public:
    triangle()
    {
        this->field1 = 3;
        this->name = "Треугольник";
        this->check = Check();
    }
    triangle(int a, int b, int c, int A, int B, int C)
    {
        this->field1 = 3;
        this->name = "Треугольник";
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
        std::cout << trex() << std::endl;
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
    
    virtual bool Check() //Виртуальный метод проверки на сумму углов четырехугольника == 360
	{
		if ((A + B + C + D) == 360) { return true; }
		else { return false; }
	};
	bool CheckSides1() //Метод проверки, что стороны а,с и в,d попарно равны
	{
		if (a == c && b == d) { return true; }
		else { return false; }
	};
	bool CheckSides2() //Метод проверки, что все стороны равны
	{
		if (a == b && b == c && c == d) { return true; }
		else { return false; }
	};
	bool CheckAngles1() //Метод проверки, что все углы равны 90 гр
	{
		if (A == 90 && B == 90 && C == 90 && D == 90) { return true; }
		else { return false; }
	};
	bool CheckAngles2() //Метод проверки, что углы А,С и В,D попарно равны
	{
		if (A == C && B == D) { return true; }
		else { return false; }
	};
public:
    quadrilateral()
    {
        this->field1 = 4;
        this->name = "Четырехугольник";
        this->check = Check();
    }
    void get_info() override
    {
        std::cout <<  name << ":" << std::endl;
        std::cout <<  trex() << std::endl;
        std::cout << "Количество сторн: "  <<  field1 << std::endl;
        std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << '\n' << std::endl;
    }
};

class triangle90 : public triangle
{
protected:
	bool Check() override
	{
		if (triangle::Check() &&(C == 90)) { return true; }
		else { return false; }
	};
public:
    triangle90()
    {
        this->name = "Прямоугольный треугольник";
        this->C = 90;
    }

    triangle90(int a,int b,int c,int A,int B)
    {
        this->name = "Прямоугольный треугольник";
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
protected:
	bool Check() override
	{
		if (triangle::Check() && (C == 90)) { return true; }
		else { return false; }
	};
public:
    triangle90_1()
    {
        this->name = "Прямоугольный треугольник";
        this->C = 90;
        this->B = 40;
    }

    triangle90_1(int a,int b,int c,int A)
    {
        this->name = "Прямоугольный треугольник";
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
protected:
	bool Check() override
	{
		if (triangle::Check() && (a==c && A==C)) { return true; }
		else { return false; }
	};	
public:
    isosceles_triangle()
    {
        this->name = "Равнобедренный треугольник";
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
private:
	bool CheckEquilTriangle()
	{
		if (a == b && b == c && (A == 60) && B == 60 && C == 60) { return true; }
		else { return false; }
	};
public:
    equilateral_triangle()
    {
        this->name = "Равносторонний треугольник";
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
        this->A = 60;
        this->c = a;
        this->b = a;
        this->C = A;
        this->B = A;
        this->a = a;
    }
    
protected:
	bool Check() override
	{
		if (triangle::Check() && (CheckEquilTriangle())) { return true; }
		else { return false; }
	};
};

class rectangle : public quadrilateral
{
protected:
	bool Check() override
	{
		if (quadrilateral::Check() && quadrilateral::CheckSides1() && quadrilateral::CheckAngles1())
		{
			return true;
		}
		else
		{
			return false;
		}
	};
	
public:
    rectangle()
    {
        this->name = "Прямоугольник";
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
protected:
	bool Check() override {
		if (quadrilateral::Check() && quadrilateral::CheckSides2() && quadrilateral::CheckAngles1()) { return true; }
		else { return false; }
	};
public:
    square()
    {
        this->name = "Квадрат";
        this->c = a;
        this->b = a;
        this->d = a;

    }

    square(int a)
    {
        this->name = "Квадрат";
        this->a = a;
        this->c = a;
        this->b = a;
        this->d = a;
     }    
    
};

class parallelogram : public quadrilateral
{
protected:
	bool Check() override {
		if (quadrilateral::Check() && quadrilateral::CheckSides1() && quadrilateral::CheckAngles2()) { return true; }
		else { return false; }
	};
public:
    parallelogram()
    {
        this->name = "Параллелограмм";
        this->c = a;
        this->d = b;
        this->C = A;
        this->D = B;
    }

    parallelogram(int a, int b, int A, int B)
    {
        this->name = "Параллелограмм";
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
protected:
	bool Check() override {
		if (quadrilateral::Check() && quadrilateral::CheckSides2() && quadrilateral::CheckAngles2()) { return true; }
		else { return false; }
	};
public:
    rhomb()
    {
        this->name = "Ромб";
        this->c = a;
        this->b = a;
        this->d = b;
    }
    rhomb(int a, int A, int B)
    {
        this->name = "Ромб";
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
