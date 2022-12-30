#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <chrono>
#include "Object.h"

using namespace std;

class IRule : public Object{
public:
    virtual string rename(string input) = 0;
};

class RemoveSpecialChars : public IRule{
private:
    vector<char> _blacklists;
public:
    RemoveSpecialChars(vector<char> blacklists){this -> _blacklists = blacklists;}
    string rename(string input);
    string toString(){return NULL;}
};

class OneSpaceOnly : public IRule{
public:
    string rename(string input);
    string toString(){return NULL;}
};

class AddCurrentMonth : public IRule{
public:
    string rename(string input);
    string toString(){return NULL;}
};

class AddPrefix : public IRule{
private:
    string _prefix_str;
public:
    AddPrefix(string prefix_str){this -> _prefix_str = prefix_str;}
    string rename(string input);
    string toString(){return NULL;}
};

class Replace : public IRule{
private:
    string _pattern;
    string _to;
public:
    Replace(string pattern, string to){this -> _pattern = pattern; this -> _to = to;}
    string rename(string input);
    string toString(){return NULL;}
};