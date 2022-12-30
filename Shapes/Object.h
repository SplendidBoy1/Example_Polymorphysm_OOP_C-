#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Object{
public:
    Object();
    virtual string toString() = 0;
};