#include "Header.h"
#include <iostream>


    Treug::Treug(double A, double B, double C, double a, double b, double c)
    {
        this->A = A;
        this->B = B;
        this->C = C;
        this->a = a;
        this->b = b;
        this->c = c;

    };

    void Treug::vivod_1str()
    {
        std::cout << "Треугольник" << std::endl;
    };
    void Treug::vivod_ost()
    {
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << std::endl;
        std::cout << std::endl;
    };

    void Treug::vivod()
    {
        this->vivod_1str();
        this->vivod_ost();

    };





    Shetug::Shetug(double A, double B, double C, double D, double a, double b, double c, double d)
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
    void Shetug::vivod_1str()
    {
        std::cout << "Четыреxугольник" << std::endl;
    };
    void Shetug::vivod_ost()
    {
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
        std::cout << std::endl;
    };

    void Shetug::vivod()
    {
        this->vivod_1str();
        this->vivod_ost();
    };




    Priam_treug::Priam_treug(double A, double B, double a, double b, double c) : Treug(A, B, 90, a, b, c)
    {
    };

    void  Priam_treug::vivod()
    {
        std::cout << "Прямоугольный треугольник" << std::endl;
        this->vivod_ost();
    };




    Ravnbedr_treug::Ravnbedr_treug(double A, double B, double a, double b) : Treug(A, B, A, a, b, a)
    {
    };

    void Ravnbedr_treug::vivod()
    {
        std::cout << "Равнобедренный треугольник" << std::endl;
        this->vivod_ost();
    };





    Ravnostor_treug::Ravnostor_treug(double a) :Ravnbedr_treug(60, 60, a, a)
    {

    };

    void Ravnostor_treug::vivod()
    {
        std::cout << "Равносторонний треугольник" << std::endl;
        this->vivod_ost();
    };





    Paralerogram::Paralerogram(double A, double B, double a, double b) :Shetug(A, B, A, B, a, b, a, b)
    {

    };
    void Paralerogram::vivod()
    {
        std::cout << "Параллелограмм" << std::endl;
        this->vivod_ost();
    };


    Priamoug::Priamoug(double a, double b) : Paralerogram(90, 90, a, b)
    {
    };
    void Priamoug::vivod()
    {
        std::cout << "Прямоугольник" << std::endl;
        this->vivod_ost();
    };





    Kvadrat::Kvadrat(double a) : Priamoug(a, a)
    {};
    void Kvadrat::vivod()
    {
        std::cout << "Квадрат" << std::endl;
        this->vivod_ost();
    };


    Romb::Romb(double A, double B, double a) : Paralerogram(A, B, a, a)
    {};

    void  Romb::vivod()
    {
        std::cout << "Ромб" << std::endl;
        this->vivod_ost();
    };


