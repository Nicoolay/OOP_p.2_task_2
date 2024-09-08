#include <string>
#include <Windows.h>
#include <iostream>

class Figure {
protected:
    int sides_count;
    std::string name;
    int side_a, side_b, side_c, side_d;
    int angle_A, angle_B, angle_C, angle_D;

    Figure(int sides, const std::string& fig_name)
        : sides_count(sides), name(fig_name), side_a(0), side_b(0), side_c(0), side_d(0),
        angle_A(0), angle_B(0), angle_C(0), angle_D(0) {}

public:
    Figure() : Figure(0, "Фигура") {}

    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }
    int get_sides_count() { return sides_count; }
    std::string get_name() { return name; }
};

class Triangle : protected Figure {
protected:
    Triangle(int sides, const std::string& fig_name, int a, int b, int c, int A, int B, int C)
        : Figure(sides, fig_name) {
        side_a = a;
        side_b = b;
        side_c = c;
        angle_A = A;
        angle_B = B;
        angle_C = C;
    }

public:
    Triangle() : Triangle(3, "Треугольник", 10, 20, 30, 50, 60, 70) {}

   
};

class Right_triangle : protected Triangle {
public:
    Right_triangle() : Triangle(3, "Прямоугольный треугольник", 10, 20, 30, 90, 45, 45) {}

   
};

class Isosceles_triangle : protected Triangle {
public:
    Isosceles_triangle() : Triangle(3, "Равнобедренный треугольник", 10, 20, 10, 50, 60, 50) {}

   
};

class Equilateral_triangle : protected Triangle {
public:
    Equilateral_triangle() : Triangle(3, "Равносторонний треугольник", 30, 30, 30, 60, 60, 60) {}

    
};

class Quadrangle : protected Figure {
protected:
    Quadrangle(int sides, const std::string& fig_name, int a, int b, int c, int d, int A, int B, int C, int D)
        : Figure(sides, fig_name) {
        side_a = a;
        side_b = b;
        side_c = c;
        side_d = d;
        angle_A = A;
        angle_B = B;
        angle_C = C;
        angle_D = D;
    }

public:
    Quadrangle() : Quadrangle(4, "Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80) {}

};

class Square : protected Quadrangle {
public:
    Square() : Quadrangle(4, "Квадрат", 20, 20, 20, 20, 90, 90, 90, 90) {}

   
};

class Parallelogram : protected Quadrangle {
public:
    Parallelogram() : Quadrangle(4, "Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40) {}

    
};

class Rhombus : protected Quadrangle {
public:
    Rhombus() : Quadrangle(4, "Ромб", 30, 30, 30, 30, 60, 60, 60, 60) {}

    
};

class Rect : protected Quadrangle {
public:
    Rect() : Quadrangle(4, "Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90) {}

   
};

void print_info(Figure* fig) {
    std::cout << fig->get_name() << ": " << std::endl;

    if (fig->get_sides_count() == 3) {

        std::cout << "Стороны: " << "a=" << fig->get_side_a() << " b=" << fig->get_side_b() << " c=" << fig->get_side_c() << std::endl;
        std::cout << "Углы: " << "A=" << fig->get_angle_A() << " B=" << fig->get_angle_B() << " C=" << fig->get_angle_C() << std::endl;
        std::cout << std::endl;
    }
    else if (fig->get_sides_count() == 4) {

        std::cout << "Стороны: " << "a=" << fig->get_side_a() << " b=" << fig->get_side_b() << " c=" << fig->get_side_c() << " d=" << fig->get_side_d() << std::endl;
        std::cout << "Углы: " << "A=" << fig->get_angle_A() << " B=" << fig->get_angle_B() << " C=" << fig->get_angle_C() << " D=" << fig->get_angle_D() << std::endl;
        std::cout << std::endl;
    }
    else {
        std::cout << "Количество сторон: " << fig->get_sides_count() << std::endl;
        std::cout << std::endl;

    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Figure figure;
    Triangle triangle;
    Right_triangle right_triangle;
    Isosceles_triangle isosceles_triangle;
    Equilateral_triangle equilateral_triangle;
    Quadrangle quadrangle;
    Rect rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhombus rhombus;

    print_info(&figure);
    print_info((Figure*)&right_triangle);
    print_info((Figure*)&isosceles_triangle);
    print_info((Figure*)&equilateral_triangle);
    print_info((Figure*)&rectangle);
    print_info((Figure*)&square);
    print_info((Figure*)&parallelogram);
    print_info((Figure*)&rhombus);

    return 0;
}
