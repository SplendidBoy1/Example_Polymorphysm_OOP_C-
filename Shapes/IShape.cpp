#include "IShape.h"

#define PI 3.14

Circle :: Circle(double radius){
    this -> _radius = radius;
}

double Circle :: area(){
    double result;
    result = PI * this -> _radius * this -> _radius;
    return result;
}

double Circle :: perimeter(){
    double result;
    result = 2 * PI * this -> _radius;
    return result;
}

string Circle :: toString(){
    stringstream ss;
    ss << "Circle r=" << this ->_radius;
    return ss.str();
}
////////////////////////////////////////

Rectangle :: Rectangle(double width, double height){
    this -> _width = width;
    this -> _height = height;
}

double Rectangle :: area(){
    double result;
    result = this -> _width * this -> _height;
    return result;
}

double Rectangle :: perimeter(){
    double result;
    result = (this -> _width + this -> _height) * 2;
    return result;
}

string Rectangle :: toString(){
    stringstream ss;
    ss << "Rectangle w=" << this -> _width << ", h=" << this ->_height;
    return ss.str();
}
//////////////////////////////////////

Square :: Square(double a){
    this -> _a = a;
}

double Square :: area(){
    double result;
    result = this -> _a * this -> _a;
    return result;
}

double Square :: perimeter(){
    double result;
    result = 4 * this -> _a;
    return result;
}

string Square :: toString(){
    stringstream ss;
    ss << "Square r=" << this -> _a;
    return ss.str();
}