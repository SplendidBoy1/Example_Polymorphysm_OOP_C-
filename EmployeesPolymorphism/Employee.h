#pragma once

#include <iostream>
#include <string>
#include "Object.h"
#include "Integer.h"

using namespace std;

class Employee : public Object{
protected:
    string _name;

public:
    virtual Object* salary() = 0;
    string toString(){return this -> _name;}
};




class Manager : public Employee{
private:
    int _employeeCount;
    int _paymentPerEmployee;
    int _baseSalary;

public:
    Manager(int employeeCount, int paymentPerEmployee, int baseSalary);
    Object* salary();
};

class DailyEmployee : public Employee{
private:
    int _dayCount;
    int _paymentPerDay;

public:
    DailyEmployee(int dayCount, int paymentPerDay);
    Object* salary();
};

class ProductEmployee : public Employee{
private:
    int _productCount;
    int _paymentPerProduct;

public:
    ProductEmployee(int productCount, int paymentPerProduct);
    Object* salary();
};

