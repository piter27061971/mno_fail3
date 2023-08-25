﻿// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"

/*
class Figure
{

};
class Treug : public Figure
{
public:
    Treug(double A, double B, double C, double a, double b, double c)
    {
        this->A = A;
        this->B = B;
        this->C = C;
        this->a = a;
        this->b = b;
        this->c = c;

    };

    void vivod_1str()
    {
        std::cout << "Треугольник" << std::endl;
    };
    void vivod_ost()
    {
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << std::endl;
        std::cout << std::endl;
    };

    void vivod()
    {
        this->vivod_1str();
        this->vivod_ost();

    };



protected:
    double A, B, C, a, b, c;

};


class Shetug : public Figure
{
public:
    Shetug(double A, double B, double C, double D, double a, double b, double c, double d)
    {
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;


    };
    void vivod_1str()
    {
        std::cout << "Четыреxугольник" << std::endl;
    };
    void vivod_ost()
    {
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
        std::cout << std::endl;
    };

    void vivod()
    {
        this->vivod_1str();
        this->vivod_ost();
    };

protected:
    double A, B, C, D, a, b, c, d;
};


class Priam_treug : public Treug
{
public:
    Priam_treug(double A, double B, double a, double b, double c) : Treug(A, B, 90, a, b, c)
    {
    };

    void vivod()
    {
        std::cout << "Прямоугольный треугольник" << std::endl;
        this->vivod_ost();
    };

};

class Ravnbedr_treug : public Treug
{

public:
    Ravnbedr_treug(double A, double B, double a, double b) : Treug(A, B, A, a, b, a)
    {
    };

    void vivod()
    {
        std::cout << "Равнобедренный треугольник" << std::endl;
        this->vivod_ost();
    };


};


class Ravnostor_treug : public Ravnbedr_treug
{

public:
    Ravnostor_treug(double a) :Ravnbedr_treug(60, 60, a, a)
    {

    };

    void vivod()
    {
        std::cout << "Равносторонний треугольник" << std::endl;
        this->vivod_ost();
    };

};


class Paralerogram : public Shetug
{
public:
    Paralerogram(double A, double B, double a, double b) :Shetug(A, B, A, B, a, b, a, b)
    {

    };
    void vivod()
    {
        std::cout << "Параллелограмм" << std::endl;
        this->vivod_ost();
    };
};

class Priamoug : public Paralerogram
{
public:
    Priamoug(double a, double b) : Paralerogram(90, 90, a, b)
    {
    };
    void vivod()
    {
        std::cout << "Прямоугольник" << std::endl;
        this->vivod_ost();
    };

};

class Kvadrat : public Priamoug
{
public:

    Kvadrat(double a) : Priamoug(a, a)
    {};
    void vivod()
    {
        std::cout << "Квадрат" << std::endl;
        this->vivod_ost();
    };

};

class Romb : public Paralerogram
{
public:
    Romb(double A, double B, double a) : Paralerogram(A, B, a, a)
    {};

    void vivod()
    {
        std::cout << "Ромб" << std::endl;
        this->vivod_ost();
    };


};

*/

int main()
{
    setlocale(LC_ALL, "Russian");

    Treug S1(50, 60, 70, 10, 20, 30);
    Priam_treug S2(50, 60, 10, 20, 30);
    Ravnbedr_treug S3(50, 60, 10, 20);
    Ravnostor_treug S4(30);
    Shetug S5(50, 60, 70, 80, 10, 20, 30, 40);
    Priamoug S6(10, 20);
    Kvadrat S7(20);
    Paralerogram S8(30, 40, 20, 30);
    Romb S9(30, 40, 30);
    S1.vivod();
    S2.vivod();
    S3.vivod();
    S4.vivod();
    S5.vivod();
    S6.vivod();
    S7.vivod();
    S8.vivod();
    S9.vivod();





    //std::cout << "Hello World!\n";
}
/*
В этом задании вы усложните иерархию классов для усложнённой предметной области.

У вас появляется информация о длине сторон и углах ваших фигур, а также несколько более конкретных фигур. Теперь в треугольнике вы должны хранить информацию о длине всех его трёх сторон (a, b, c) и значениях его трёх углов (A, B, C). В четырёхугольнике вы храните информацию о длине его четырёх сторон (a, b, c, d) и значениях его четырёх углов (A, B, C, D).

Также у вас появляются более конкретные фигуры:

    прямоугольный треугольник (угол C всегда равен 90);
    равнобедренный треугольник (стороны a и c равны, углы A и C равны);
    равносторонний треугольник (все стороны равны, все углы равны 60);
    прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
    квадрат (все стороны равны, все углы равны 90);
    параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
    ромб (все стороны равны, углы A,C и B,D попарно равны).

Вы должны иметь возможность узнать у каждой фигуры длины её сторон и значения её углов, но извне вы не должны быть способны изменить длины сторон и углы.
Не должно быть возможности создать фигуры, не удовлетворяющие перечисленным условиям. Например, нельзя создать квадрат с разными углами.
Геометрические соотношения проверять не нужно. Например, сумма углов в треугольнике может быть не равна 180.
Задача: спроектировать и реализовать классы, описывающие предметную область.
Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. Значения используйте произвольные.
Инициализацию длин сторон и величин углов нужно выполнить с помощью вызова базовых конструкторов.
Для вывода информации о фигуре создайте функцию print_info, которая будет принимать в качестве аргумента указатель на базовый класс фигуры.
Пример работы программы
Консоль

Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Равнобедренный треугольник:
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
