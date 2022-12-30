#include "IParsable.h"

using namespace std;



Object* SquareParser :: parse(string input){
    int firstPos = input.find("=", 0);
    int count = input.length() - firstPos;
    string s_a = input.substr(firstPos + 1, count);
    double d_a = stod(s_a);
    Object* obj;
    IShape* shape = new Square(d_a);
    obj = shape;
    return obj;
}

string SquareParser :: toString(){
    return NULL;
}

//////////////////

Object* RectangleParser :: parse(string input){
    int firstPos = input.find("=", 0);
    int findPos = input.find(",", firstPos);
    int count = findPos - firstPos;
    string s_w = input.substr(firstPos + 1, count);
    double d_w = stod(s_w);
    firstPos = input.find("=", firstPos + 1);
    count = input.length() - firstPos;
    string s_h = input.substr(firstPos + 1, count);
    double d_h = stod(s_h);
    Object* obj;
    IShape* shape = new Rectangle(d_w, d_h);
    obj = shape;
    return obj;
}

string RectangleParser :: toString(){
    return NULL;
}

//////////////////////////

Object* CircleParser :: parse(string input){
    int firstPos = input.find("=", 0);
    int count = input.length() - firstPos;
    string s_r = input.substr(firstPos + 1, count);
    double d_r = stod(s_r);
    Object* obj;
    IShape* shape = new Circle(d_r);
    obj = shape;
    return obj;
}

string CircleParser :: toString(){
    return NULL;
}