
#include <iostream>


class Figure {
public:
    virtual int edges()
    {
        return 0;
    }

};
class Triangle : public Figure {
public:
    int edges() override
    {
        return 3;
    }
};

class Orictangle : public Figure {
public:
    int edges() override
    {
        return 4;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure f;
    Triangle t;
    Orictangle o;
    std::cout << "Количество сторон: " << std::endl;
    std::cout << "Фигура: " << f.edges() << std::endl;
    std::cout << "Треугольник: " << t.edges() << std::endl;
    std::cout << "Четырехугольник: " << o.edges() << std::endl;

}