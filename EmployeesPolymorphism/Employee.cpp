#include "Employee.h"

ProductEmployee :: ProductEmployee(int productCount, int paymentPerProduct){
    this -> _productCount = productCount;
    this -> _paymentPerProduct = paymentPerProduct;
    this -> _name = "ProductEmployee";
}

Object* ProductEmployee :: salary(){
    int salary = this -> _productCount * this -> _paymentPerProduct;;
    Object* obj;
    obj = new Integer(salary);
    obj = dynamic_cast<Object*>(obj);
    return obj;
}


////////////////
Manager :: Manager(int employeeCount, int paymentPerEmployee, int baseSalary){
    this -> _employeeCount = employeeCount;
    this -> _paymentPerEmployee = paymentPerEmployee;
    this -> _baseSalary = baseSalary;
    this -> _name = "Manager";
}

Object* Manager :: salary(){
    int salary = this -> _employeeCount * this -> _paymentPerEmployee + this -> _baseSalary;
    Object* obj;
    obj = new Integer(salary);
    obj = dynamic_cast<Object*>(obj);
    return obj;
}

///////////////////////////
DailyEmployee :: DailyEmployee(int dayCount, int paymentPerDay){
    this -> _dayCount = dayCount;
    this -> _paymentPerDay = paymentPerDay;
    this -> _name = "DailyEmployee";
}

Object* DailyEmployee :: salary(){
    int salary = this -> _dayCount * this -> _paymentPerDay;
    Object* obj;
    obj = new Integer(salary);
    obj = dynamic_cast<Object*>(obj);
    return obj;
}