#pragma once

#include "Object.h"
#include <map>
#include "IParsable.h"
#include <string>

using namespace  std;

class ParserFactory : public Object{
private:
	map<string, IParsable*> _container;

public:
	void registerWith(IParsable* parser);
	IParsable* create(string type);
	string toString(){return NULL;}
};
