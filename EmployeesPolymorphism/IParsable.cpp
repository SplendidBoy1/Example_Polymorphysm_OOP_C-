#include "IParsable.h"
///////////////////
DailyEmployeeParser :: DailyEmployeeParser(){
    this -> _name = "DailyEmployee";
}

Object* DailyEmployeeParser :: parse(string input){
    vector<string> values = Utils :: String :: split(input, ", ");
    const int num_of_attributes = values.size();
    vector<string> attributes[num_of_attributes];
    int data[num_of_attributes];
    for (int i = 0; i < num_of_attributes; i++){
        attributes[i] = Utils :: String :: split(values.at(i), "=");
        data[i] = stoi(attributes[i].at(1));
    }
    Object* obj;
    obj = new DailyEmployee(data[0], data[1]);
    return obj;
}


////////////////////////
ProductEmployeeParser :: ProductEmployeeParser(){
    this -> _name = "ProductEmployee";
}

Object* ProductEmployeeParser :: parse(string input){
    vector<string> values = Utils :: String :: split(input, ", ");
    const int num_of_attributes = values.size();
    vector<string> attributes[num_of_attributes];
    int data[num_of_attributes];
    for (int i = 0; i < num_of_attributes; i++){
        attributes[i] = Utils :: String :: split(values.at(i), "=");
        data[i] = stoi(attributes[i].at(1));
    }
    Object* obj;
    obj = new ProductEmployee(data[0], data[1]);
    return obj;
}

/// @brief /////////////////////
ManagerParser :: ManagerParser(){
    this -> _name = "Manager";

}

Object* ManagerParser :: parse(string input){
    int data[3];
    int firstPos = input.find("=", 0);
    int findPos = input.find(",", firstPos);
    int count = findPos - firstPos;
    string data1 = input.substr(firstPos + 1, count);
    data[0] = stoi(data1);
    firstPos = input.find("=", firstPos + 1);
    findPos = input.find(",", firstPos);
    count = findPos - firstPos;
    string data2 = input.substr(firstPos + 1, count );
    data[1] = stoi(data2);
    firstPos = input.find("=", firstPos + 1);
    count = input.length() - firstPos;
    string data3 = input.substr(firstPos + 1, count );
    data[2] = stoi(data3);
    Object* obj;
    obj = new Manager(data[0], data[1], data[2]);
    return obj;
}