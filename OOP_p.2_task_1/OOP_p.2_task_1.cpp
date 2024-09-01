#include <iostream>
#include <string>
#include <Windows.h>

class Figure
{
protected:
    int sides_count{};
    std::string name;
    Figure(int sides, const std::string& fig_name) : sides_count(sides), name(fig_name) {}

public:
    Figure() : Figure(0, "Фигура: ") {}
   
    
    int get_sides_count(){
       return sides_count;
    };

    std::string get_name() {
        return name;
    };

};


class Triangle : private Figure {
public:
    Triangle(): Figure(3,"Треугольник: "){}
    int get_sides_count() {
        return Figure::get_sides_count();
    }

    std::string get_name() {
        return Figure::get_name();
    }
};

class Quadrangle : private Figure 
{
public:
    Quadrangle(): Figure(4, "Четырёхугольник: "){}
    int get_sides_count() {
        return Figure::get_sides_count();
    }

    std::string get_name() {
        return Figure::get_name();
    }
};

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    Figure fig;
    Triangle trig;
    Quadrangle quad;
    std::cout << "Количество сторон: " << std::endl;
    std::cout<< fig.get_name() << fig.get_sides_count()<< std::endl;
    std::cout << trig.get_name() << trig.get_sides_count() << std::endl;// Вызов метода
    std::cout << quad.get_name() << quad.get_sides_count() << std::endl;
    return 0;
}

