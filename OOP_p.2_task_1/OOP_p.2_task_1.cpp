#include <iostream>
#include <string>
#include <Windows.h>

// Базовый класс для треугольников
class Triangle {
protected:
    int side_a, side_b, side_c;
    int angle_A, angle_B, angle_C;
    std::string triangle_name;

    // Конструктор с параметрами, инициализирующий члены класса
    Triangle(const std::string& fig_name, int a, int b, int c, int A, int B, int C)
        : triangle_name(fig_name), side_a(a), side_b(b), side_c(c), angle_A(A), angle_B(B), angle_C(C) {}

public:
    // Публичный конструктор по умолчанию, вызывающий защищённый конструктор
    Triangle() : Triangle("Треугольник", 10, 20, 30, 50, 60, 70) {}

    // Публичные методы доступа к защищённым членам класса
    std::string get_triangle_name() { return triangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
};

// Класс для прямоугольного треугольника с protected наследованием
class Right_triangle : protected Triangle {
public:
    Right_triangle() : Triangle("Прямоугольный треугольник", 10, 20, 30, 50, 60, 70) {}

    // Публичные методы доступа к защищённым членам базового класса
    std::string get_triangle_name() { return triangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
};

// Класс для равнобедренного треугольника с protected наследованием
class Isosceles_triangle : protected Triangle {
public:
    Isosceles_triangle() : Triangle("Равнобедренный треугольник", 10, 20, 10, 50, 60, 50) {}

    // Публичные методы доступа к защищённым членам базового класса
    std::string get_triangle_name() { return triangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
};

// Класс для равностороннего треугольника с protected наследованием
class Equilateral_triangle : protected Triangle {
public:
    Equilateral_triangle() : Triangle("Равносторонний треугольник", 30, 30, 30, 60, 60, 60) {}

    // Публичные методы доступа к защищённым членам базового класса
    std::string get_triangle_name() { return triangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
};

// Базовый класс для четырёхугольников
class Quadrangle {
protected:
    int side_a, side_b, side_c, side_d;
    int angle_A, angle_B, angle_C, angle_D;
    std::string quadrangle_name;

    // Конструктор с параметрами, инициализирующий члены класса
    Quadrangle(const std::string& fig_name, int a, int b, int c, int d, int A, int B, int C, int D)
        : quadrangle_name(fig_name), side_a(a), side_b(b), side_c(c), side_d(d), angle_A(A), angle_B(B), angle_C(C), angle_D(D) {}

public:
    // Публичный конструктор по умолчанию, вызывающий защищённый конструктор
    Quadrangle() : Quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80) {}

    // Публичные методы доступа к защищённым членам класса
    std::string get_quadrangle_name() { return quadrangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }
};

class Square : protected Quadrangle {
public:
    Square() : Quadrangle("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90) {}

    std::string get_quadrangle_name() { return quadrangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }
};

class Parallelogram : protected Quadrangle {
public:
    Parallelogram() : Quadrangle("Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40) {}

    std::string get_quadrangle_name() { return quadrangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }
};

// Класс для ромба с protected наследованием
class Rhombus : protected Quadrangle {
public:
    Rhombus() : Quadrangle("Ромб", 30, 30, 30, 30, 30, 40, 30, 40) {}

    std::string get_quadrangle_name() { return quadrangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }
};

void print_info_trig(Triangle* trig) {
    std::cout << trig->get_triangle_name() << ": " << std::endl;
    std::cout << "Стороны: " << "a=" << trig->get_side_a() << " b=" << trig->get_side_b() << " c=" << trig->get_side_c() << std::endl;
    std::cout << "Углы: " << "A=" << trig->get_angle_A() << " B=" << trig->get_angle_B() << " C=" << trig->get_angle_C() << std::endl;
    std::cout << std::endl;

}

void print_info_quad(Quadrangle* quad) {
    std::cout << quad->get_quadrangle_name() << ": " << std::endl;
    std::cout << "Стороны: " << "a=" << quad->get_side_a() << " b=" << quad->get_side_b() << " c=" << quad->get_side_c() << " d=" << quad->get_side_d() << std::endl;
    std::cout << "Углы: " << "A=" << quad->get_angle_A() << " B=" << quad->get_angle_B() << " C=" << quad->get_angle_C() << " D=" << quad->get_angle_D() << std::endl;
    std::cout << std::endl;
}

class Rect : protected Quadrangle {
public:
    Rect() : Quadrangle("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90) {}

    // Публичные методы доступа к защищённым членам базового класса
    std::string get_quadrangle_name() { return quadrangle_name; }
    int get_side_a() { return side_a; }
    int get_side_b() { return side_b; }
    int get_side_c() { return side_c; }
    int get_side_d() { return side_d; }
    int get_angle_A() { return angle_A; }
    int get_angle_B() { return angle_B; }
    int get_angle_C() { return angle_C; }
    int get_angle_D() { return angle_D; }
};


int main(int argc, char* argv[]) {
    // Установка кодировки консоли для вывода на русском языке
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Создание объектов различных фигур
    Triangle triangle;
    Right_triangle right_triangle;
    Isosceles_triangle isosceles_triangle;
    Equilateral_triangle equilateral_triangle;
    Quadrangle quadrangle;
    Rect rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhombus rhombus;

    // Вызов функций для вывода информации о треугольниках
    print_info_trig(&triangle);
    print_info_trig((Triangle*)&right_triangle);
    print_info_trig((Triangle*)&isosceles_triangle);
    print_info_trig((Triangle*)&equilateral_triangle);

    //Вызов функций для вывода информации о четырёхугольниках
    print_info_quad(&quadrangle);
    print_info_quad((Quadrangle*)&rectangle);
    print_info_quad((Quadrangle*)&square);
    print_info_quad((Quadrangle*)&parallelogram);
    print_info_quad((Quadrangle*)&rhombus);

    return 0;
}
