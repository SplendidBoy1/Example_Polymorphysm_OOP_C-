#pragma once

#include "Object.h"
#include "Employee.h"
#include <string>
#include <iostream>
#include "Utils.h"

using namespace std;

class IParsable : public Object{
protected:
    string _name;
public:
    virtual Object* parse(string input) = 0;
    virtual string parsedObjectName() = 0;
};

class DailyEmployeeParser : public IParsable{

public:
    DailyEmployeeParser();
    string toString(){return NULL;}
    Object* parse (string input);
    string parsedObjectName(){return "DailyEmployee";}
};

class ProductEmployeeParser : public IParsable{

public:
    ProductEmployeeParser();
    string toString(){return NULL;}
    Object* parse (string input);
    string parsedObjectName(){return "ProductEmployee";}
};

class ManagerParser : public IParsable{

public:
    ManagerParser();
    string toString(){return NULL;};
    Object* parse (string input);
    string parsedObjectName(){return "Manager";}
};