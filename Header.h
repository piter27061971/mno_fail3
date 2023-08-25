#pragma once


class Figure
{

};
class Treug : public Figure
{
public:
    Treug(double A, double B, double C, double a, double b, double c);
    

    void vivod_1str();
    
    void vivod_ost();
    

    void vivod();

protected:
    double A, B, C, a, b, c;

};


class Shetug : public Figure
{
public:
    Shetug(double A, double B, double C, double D, double a, double b, double c, double d);
    
    void vivod_1str();
    void vivod_ost();

    void vivod();
   

protected:
    double A, B, C, D, a, b, c, d;
};


class Priam_treug : public Treug
{
public:
    Priam_treug(double A, double B, double a, double b, double c)  ;
    

    void vivod();
   

};

class Ravnbedr_treug : public Treug
{

public:
    Ravnbedr_treug(double A, double B, double a, double b) ;
    

    void vivod();
    


};


class Ravnostor_treug : public Ravnbedr_treug
{

public:
    Ravnostor_treug(double a) ;
    
    void vivod();
    

};


class Paralerogram : public Shetug
{
public:
    Paralerogram(double A, double B, double a, double b) ;
    
    void vivod();
    
};

class Priamoug : public Paralerogram
{
public:
    Priamoug(double a, double b) ;
   
    void vivod();
    

};

class Kvadrat : public Priamoug
{
public:

    Kvadrat(double a) ;
    
    void vivod();
    
};

class Romb : public Paralerogram
{
public:
    Romb(double A, double B, double a) ;
    

    void vivod();
   


};