#pragma once

#include "Object.h"
#include "IRule.h"
#include <string>
#include <iostream>
#include "Utils.h"

using namespace std;

class IParsable : public Object{
protected:
public:
    virtual Object* parse(string input) = 0;
    virtual string parsedObjectName() = 0;
};

class RemoveSpecialCharsParser : public IParsable{
public:
    string toString(){return NULL;}
    Object* parse(string input);
    string parsedObjectName(){return "RemoveSpecialChars";}
};


class OneSpaceOnlyParser : public IParsable{
public:
    string toString(){return NULL;}
    Object* parse (string input);
    string parsedObjectName(){return "OneSpaceOnly";}
};

class AddCurrentMonthParser : public IParsable{

public:
    string toString(){return NULL;};
    Object* parse (string input);
    string parsedObjectName(){return "AddCurrentMonth";}
};

class AddPrefixParser : public IParsable{
public:
    string toString(){return NULL;};
    Object* parse (string input);
    string parsedObjectName(){return "AddPrefix";}
};

class ReplaceParser : public IParsable{
private:
    string _pattern;
    string _to;
    
public:
    string toString(){return NULL;};
    Object* parse (string input);
    string parsedObjectName(){return "Replace";}
};