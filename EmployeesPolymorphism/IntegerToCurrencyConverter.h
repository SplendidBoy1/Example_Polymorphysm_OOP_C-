#pragma once

#include <iostream>
#include <string>
#include "Integer.h"
#include "NumberFormatInfo.h"
#include <sstream>
#include <regex>

using namespace std;

class IntegerToCurrencyConverter : public Object{
public:
    string convert(Object* object);
    string toString(){return "";}
};