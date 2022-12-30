#pragma once


#include <iostream>
#include <string>
#include "Object.h"

using namespace std;

class Integer : public Object{
private:
    int _value;

public:
    Integer(int value);
    int value(){return this -> _value;}
    string toString(){return NULL;}
};