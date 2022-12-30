#pragma once

#include <iostream>
#include "IShape.h"
#include <vector>
#include "Object.h"
#include <string>



class IParsable : public Object{
private:
    
public:
    virtual Object* parse(string input) = 0;
};



class RectangleParser : public IParsable{
private:
    

public:
    string toString();
    Object* parse(string input);
};

class SquareParser : public IParsable{
private:

public:
    string toString();
    Object* parse(string input);
};

class CircleParser : public IParsable{
private:


public:
    string toString();
    Object* parse(string input);
};