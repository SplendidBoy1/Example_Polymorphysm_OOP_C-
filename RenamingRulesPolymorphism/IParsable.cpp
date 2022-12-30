#include "IParsable.h"

using namespace std;

////////////////////
Object* RemoveSpecialCharsParser :: parse (string input){
    vector<string> tokens = Utils :: String :: split (input, "=");
    vector<char> blacklists;
    for (int i = 0; i < tokens[1].size(); i++){
        char temp;
        temp = tokens[1].at(i);
        blacklists.push_back(temp);
    }
    Object* obj;
    obj = new RemoveSpecialChars(blacklists);
    return obj;
}

///////////////////////////

Object* OneSpaceOnlyParser :: parse (string input){
    Object* obj;
    obj = new OneSpaceOnly();
    return obj;
}

///////////////////////////////

Object* AddCurrentMonthParser :: parse (string input){
    Object* obj;
    obj = new AddCurrentMonth();
    return obj;
}

//////////////////////////////////////

Object* AddPrefixParser :: parse(string input){
    Object* obj;
    obj = new AddPrefix(input);
    return obj;
}

/////////////////////////////////
Object* ReplaceParser :: parse(string input){
    vector<string> values = Utils :: String :: split(input, ", ");
    const int num_of_attributes = values.size();
    vector<string> attributes[num_of_attributes];
    string data[num_of_attributes];
    for (int i = 0; i < num_of_attributes; i++){
        attributes[i] = Utils :: String :: split(values.at(i), "=");
        data[i] = attributes[i].at(1);
    }
    Object* obj;
    obj = new Replace(data[0], data[1]);
    return obj;
}