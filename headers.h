#ifndef HEADERS_H
#define HEADERS_H
#include <iostream>
void add(double, double);
void substract(double, double);
void multiply(double, double);
void even(int);

void add(double a, double b)
{
    std::cout << "a + b = " << a + b << std::endl;
}

void substract(double a, double b)
{
    std::cout << "a - b = " << a - b << std::endl;
}

void multiply(double a, double b)
{
    std::cout << "a * b = " << a * b << std::endl;
}

void even(int a)
{
    if(a%2==0) std::cout << "c is even\n";
    else std::cout << "c is odd\n";
}
#endif