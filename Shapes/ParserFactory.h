#pragma once

#include "IShape.h"
#include <vector>
#include <string>
#include "IParsable.h"

using namespace std;

class ParserFactory{
private: 

public:
    IParsable* create(string temp);
};

