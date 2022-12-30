#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Object.h"
#include <sstream>

using namespace std;

class IShape : public Object{
private:

public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};


class Circle : public IShape{
protected:
    double _radius;

public:
    Circle(double radius);
    double area();
    double perimeter();
    string toString();
};

class Rectangle : public IShape{
protected:
    double _width;
    double _height;

public:
    Rectangle(double width, double height);
    double area();
    double perimeter();
    string toString();
};

class Square : public IShape{
protected:
    double _a;

public:
    Square(double a);
    double area();
    double perimeter();
    string toString();
};
